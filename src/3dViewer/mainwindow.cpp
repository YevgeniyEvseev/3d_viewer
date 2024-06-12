#include "mainwindow.h"

#include <QtWidgets>

#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow) {
  ui->setupUi(this);

  open_param_of_file();

  connect(this, &MainWindow::set_points, ui->openGLWidget,
          &glViewer::set_points);
  connect(this, &MainWindow::set_update_points, ui->openGLWidget,
          &glViewer::set_update_points);
  connect(this, &MainWindow::set_update_settings, ui->openGLWidget,
          &glViewer::set_update_settings);
  connect(this, &MainWindow::signal_get_param, ui->openGLWidget,
          &glViewer::get_param_model);
  move_x = ui->move_x->value();
  move_y = ui->move_y->value();
  move_z = ui->move_z->value();
  turn_x = ui->turn_x->value();
  turn_y = ui->turn_y->value();
  turn_z = ui->turn_z->value();
  scale_d = ui->scale_d->value();

}

MainWindow::~MainWindow() {
  save_param_to_file();
  delete ui;
}

void MainWindow::open_param_of_file() {
  double tmp;
  int tmp_bool;
  QFile file("param.txt");
  if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
    QTextStream writeStream(&file);
    writeStream >> tmp;
    ui->rc_1->setValue(tmp);
    writeStream >> tmp;
    ui->rc_2->setValue(tmp);
    writeStream >> tmp;
    ui->rc_3->setValue(tmp);
    writeStream >> tmp;
    ui->vc_1->setValue(tmp);
    writeStream >> tmp;
    ui->vc_2->setValue(tmp);
    writeStream >> tmp;
    ui->vc_3->setValue(tmp);
    writeStream >> tmp;
    ui->bc_1->setValue(tmp);
    writeStream >> tmp;
    ui->bc_2->setValue(tmp);
    writeStream >> tmp;
    ui->bc_3->setValue(tmp);
    writeStream >> tmp;
    ui->bc_4->setValue(tmp);
    writeStream >> tmp_bool;
    if (tmp_bool) {
      ui->square->setChecked(tmp_bool);
    } else {
      ui->none->setChecked(tmp_bool);
    }
    writeStream >> tmp_bool;
    if (tmp_bool) {
      ui->dashes->setChecked(tmp_bool);
    } else {
      ui->solid->setChecked(tmp_bool);
    }
    writeStream >> tmp;
    ui->fin_thickness->setValue(tmp);
    writeStream >> tmp;
    ui->vertex_size->setValue(tmp);
  }
}

void MainWindow::save_param_to_file() {
  QFile file("param.txt");
  if (file.open(QIODevice::WriteOnly |
                QIODevice::Text)) {  // Если файл успешно открыт для записи в
                                     // текстовом режиме
    QTextStream writeStream(&file);  // Создаем объект класса QTextStream
    // и передаем ему адрес объекта file
    writeStream << ui->rc_1->value() << '\n';
    writeStream << ui->rc_2->value() << '\n';
    writeStream << ui->rc_3->value() << '\n';
    writeStream << ui->vc_1->value() << '\n';
    writeStream << ui->vc_2->value() << '\n';
    writeStream << ui->vc_3->value() << '\n';
    writeStream << ui->bc_1->value() << '\n';
    writeStream << ui->bc_2->value() << '\n';
    writeStream << ui->bc_3->value() << '\n';
    writeStream << ui->bc_4->value() << '\n';
    // writeStream << ui->none->isChecked() << '\n';
    writeStream << ui->square->isChecked() << '\n';
    // writeStream << ui->solid->isChecked() << '\n';
    writeStream << ui->dashes->isChecked() << '\n';
    writeStream << ui->fin_thickness->value() << '\n';
    writeStream << ui->vertex_size->value() << '\n';

    file.close();
  }
}

void MainWindow::on_Open_clicked() {
  QString file =
      QFileDialog::getOpenFileName(this, "Open file", QDir::homePath());
  std::string name = file.toStdString();
  if (name.size() > 0) {
    ui->way->setText(file);

    emit set_points(&name[0]);
    int v = 0, p = 0;
    emit signal_get_param(v, p);
    ui->vertices->setText(QString::number(v));
    ui->ribs->setText(QString::number(p));
  }
}

void MainWindow::on_move_x_valueChanged() {
  if (ui->way->text() != "")
    emit set_update_points(1 * change_sing(ui->move_x->value()), 0);
}
void MainWindow::on_move_y_valueChanged() {
  if (ui->way->text() != "")
    emit set_update_points(1 * change_sing(ui->move_y->value()), 1);
}
void MainWindow::on_move_z_valueChanged() {
  if (ui->way->text() != "")
    emit set_update_points(1 * change_sing(ui->move_z->value()), 2);
}
void MainWindow::on_turn_x_valueChanged() {
  if (ui->way->text() != "")
    emit set_update_points(1 * change_sing(ui->turn_x->value()), 3);
}
void MainWindow::on_turn_y_valueChanged() {
  if (ui->way->text() != "")
    emit set_update_points(1 * change_sing(ui->turn_y->value()), 4);
}
void MainWindow::on_turn_z_valueChanged() {
  if (ui->way->text() != "")
    emit set_update_points(1 * change_sing(ui->turn_z->value()), 5);
}
void MainWindow::on_scale_d_valueChanged() {
  if (ui->way->text() != "")
    emit set_update_points(scaling(ui->scale_d->value()), 6);
}

int MainWindow::change_sing(double num) {
  if (num >= 0) {
    change_sing_help(1);
  } else {
    change_sing_help(-1);
  }
  move_x = ui->move_x->value();
  move_y = ui->move_y->value();
  move_z = ui->move_z->value();
  turn_x = ui->turn_x->value();
  turn_y = ui->turn_y->value();
  turn_z = ui->turn_z->value();
  return sing;
}

void MainWindow::change_sing_help(int sing_num) {
  sing = 1 * sing_num;
  if (sing == 1) {
    if (ui->move_x->value() < move_x) {
      sing = -1;
    } else if (ui->move_y->value() < move_y) {
      sing = -1;
    } else if (ui->move_z->value() < move_z) {
      sing = -1;
    } else if (ui->turn_x->value() < turn_x) {
      sing = -1;
    } else if (ui->turn_y->value() < turn_y) {
      sing = -1;
    } else if (ui->turn_z->value() < turn_z) {
      sing = -1;
    }
  } else {
    if (ui->move_x->text().toDouble() > move_x) {
      sing = 1;
    } else if (ui->move_y->value() > move_y) {
      sing = 1;
    } else if (ui->move_z->value() > move_z) {
      sing = 1;
    } else if (ui->turn_x->value() > turn_x) {
      sing = 1;
    } else if (ui->turn_y->value() > turn_y) {
      sing = 1;
    } else if (ui->turn_z->value() > turn_z) {
      sing = 1;
    }
  }
}

double MainWindow::scaling(double num) {
  if (num >= 1) {
    size = 1.01;
    if (ui->scale_d->value() < scale_d) {
      size = 0.99;
    }
  } else {
    size = 0.99;
    if (ui->scale_d->value() > scale_d) {
      size = 1.01;
    }
  }
  scale_d = ui->scale_d->value();
  return size;
}

void MainWindow::on_rc_1_valueChanged() {
  emit set_update_settings(ui->rc_1->value(), 0);
}
void MainWindow::on_rc_2_valueChanged() {
  emit set_update_settings(ui->rc_2->value(), 1);
}
void MainWindow::on_rc_3_valueChanged() {
  emit set_update_settings(ui->rc_3->value(), 2);
}

void MainWindow::on_vc_1_valueChanged() {
  emit set_update_settings(ui->vc_1->value(), 3);
}
void MainWindow::on_vc_2_valueChanged() {
  emit set_update_settings(ui->vc_2->value(), 4);
}
void MainWindow::on_vc_3_valueChanged() {
  emit set_update_settings(ui->vc_3->value(), 5);
}

void MainWindow::on_bc_1_valueChanged() {
  emit set_update_settings(ui->bc_1->value(), 6);
}
void MainWindow::on_bc_2_valueChanged() {
  emit set_update_settings(ui->bc_2->value(), 7);
}
void MainWindow::on_bc_3_valueChanged() {
  emit set_update_settings(ui->bc_3->value(), 8);
}
void MainWindow::on_bc_4_valueChanged() {
  emit set_update_settings(ui->bc_4->value(), 9);
}

void MainWindow::on_fin_thickness_valueChanged() {
  emit set_update_settings(ui->fin_thickness->value(), 10);
}
void MainWindow::on_solid_clicked() { emit set_update_settings(0, 11); }
void MainWindow::on_dashes_clicked() { emit set_update_settings(1, 12); }
void MainWindow::on_vertex_size_valueChanged() {
  emit set_update_settings(ui->vertex_size->value(), 13);
}
void MainWindow::on_none_clicked() { emit set_update_settings(0, 14); }
void MainWindow::on_square_clicked() { emit set_update_settings(1, 15); }

void MainWindow::shootScreen() {
  QScreen *screen = QGuiApplication::primaryScreen();
  if (const QWindow *window = windowHandle()) screen = window->screen();
  if (!screen) return;
  originalPixmap = screen->grabWindow(ui->openGLWidget->winId());
  // show();
}

void MainWindow::on_Save_gif_clicked() {
  if (!activ_record) {
    ui->Save_gif->setText("Stop record");
    screen_Timer = new QTimer();
    connect(screen_Timer, SIGNAL(timeout()), this, SLOT(GetScreenShoot()));
    screen_Timer->start(1000);
    screen_Count = 0;
    activ_record = true;
  } else {
    activ_record = false;

    screen_Timer->stop();
    const QString format = "gif";
    QString initialPath =
        QStandardPaths::writableLocation(QStandardPaths::PicturesLocation);

    QString image_Files = initialPath + "/temp/";

    if (initialPath.isEmpty()) initialPath = QDir::currentPath();
    initialPath += tr("/untitled.") + format;

    QFileDialog fileDialog(this, tr("Save As"), initialPath);
    fileDialog.setAcceptMode(QFileDialog::AcceptSave);
    fileDialog.setFileMode(QFileDialog::AnyFile);
    fileDialog.setDirectory(initialPath);
    QStringList mimeTypes;
    const QList<QByteArray> baMimeTypes = QImageWriter::supportedMimeTypes();
    for (const QByteArray &bf : baMimeTypes)
      mimeTypes.append(QLatin1String(bf));
    fileDialog.setMimeTypeFilters(mimeTypes);
    fileDialog.selectMimeTypeFilter("image/" + format);
    fileDialog.setDefaultSuffix(format);
    if (fileDialog.exec() != QDialog::Accepted) return;
    const QString fileName = fileDialog.selectedFiles().first();
    createGifFromImages(image_Files, fileName);
    ui->Save_gif->setText("Start record");
  }
}

void MainWindow::createGifFromImages(const QString &imageFilenames,
                                     const QString &gifFilename) {
  if (imageFilenames.isEmpty()) {
    qDebug() << "No images provided";
    return;
  }

  QProcess process;
  QStringList arguments;

  arguments << "-delay" << QString::number(10);
  arguments << imageFilenames + "*.png";
  arguments << gifFilename;

  process.start("convert", arguments);
  process.waitForFinished(-1);

  if (process.exitStatus() == QProcess::NormalExit) {
    qDebug() << "GIF created:" << gifFilename;
  } else {
    qDebug() << "Failed to create GIF:" << process.errorString();
  }
  for (int i = 1; i <= 50; i++) {
    QString file_name =
        imageFilenames + "/screen" + QString::number(i) + ".png";
    QFile::remove(file_name);
  }
}

void MainWindow::GetScreenShoot() {
  screen_Count++;
  const QString format = "png";
  QString initialPath =
      QStandardPaths::writableLocation(QStandardPaths::PicturesLocation) +
      "/temp";

  if (initialPath.isEmpty()) initialPath = QDir::currentPath();
  initialPath += tr("/screen") + QString::number(screen_Count) + "." + format;
  shootScreen();
  if (screen_Count <= 50) {
    QString fileName =
        QString(initialPath).arg(screen_Count, 3, 10, QChar('0'));
    if (!originalPixmap.save(fileName)) {
      QMessageBox::warning(this, tr("Save Error"),
                           tr("The image could not be saved to \"%1\".")
                               .arg(QDir::toNativeSeparators(fileName)));
    }
  }
}

void MainWindow::on_Button_2_clicked() {
  shootScreen();
  const QString format = "png";
  QString initialPath =
      QStandardPaths::writableLocation(QStandardPaths::PicturesLocation);
  if (initialPath.isEmpty()) initialPath = QDir::currentPath();
  initialPath += tr("/untitled.") + format;

  QFileDialog fileDialog(this, tr("Save As"), initialPath);
  fileDialog.setAcceptMode(QFileDialog::AcceptSave);
  fileDialog.setFileMode(QFileDialog::AnyFile);
  fileDialog.setDirectory(initialPath);
  QStringList mimeTypes;
  const QList<QByteArray> baMimeTypes = QImageWriter::supportedMimeTypes();
  for (const QByteArray &bf : baMimeTypes) mimeTypes.append(QLatin1String(bf));
  fileDialog.setMimeTypeFilters(mimeTypes);
  fileDialog.selectMimeTypeFilter("image/" + format);
  fileDialog.setDefaultSuffix(format);
  if (fileDialog.exec() != QDialog::Accepted) return;
  const QString fileName = fileDialog.selectedFiles().first();
  if (!originalPixmap.save(fileName)) {
    QMessageBox::warning(this, tr("Save Error"),
                         tr("The image could not be saved to \"%1\".")
                             .arg(QDir::toNativeSeparators(fileName)));
  }
}
