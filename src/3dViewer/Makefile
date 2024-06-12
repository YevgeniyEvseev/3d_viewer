
CC=gcc -g
CFLAG=-c
STDFLAGS=-Werror -Wall -Wextra -std=c11
STDFLAGS_COVERAGE=-fprofile-arcs -ftest-coverage
LFLAGS_COVERAGE=-lgcov --coverage
CHECK_LIBS=-lcheck

SRCS=*.c
OBJS=*.o
OS := $(shell uname -s)


ifeq ($(OS), Linux)
    CHECK_LIBS += -lsubunit -lrt -lpthread -lm
endif

all: s21_3DViewer.a

build: clean test gcov_report

s21_3DViewer:
	$(CC) $(CFLAG) $(STDFLAGS) $(SRCS)

test: s21_3DViewer.a
	$(CC) $(STDFLAGS)  test.c s21_3DViewer.a -o test $(CHECK_LIBS)
	./test

install:
	@mkdir -p ../build
	@cp param.txt ../build/param.txt
	@cd ../build && qmake ../3dViewer/3dViewer.pro && make

uninstall:
	@rm -r ../build

dvi:
	@open readme/readme.texi

dist:
	@mkdir -p ../build
	@tar -cvzf ../build/s21_3DViewer_v1.tgz Makefile *.c *.h *.pro *.cpp *.ui readme/readme.texi 

s21_3DViewer.a: s21_3DViewer
	ar rcs s21_3DViewer.a *.o
	ranlib s21_3DViewer.a

gcov_report: clean
	$(CC) $(STDFLAGS) *.c -o test $(CHECK_LIBS) $(LFLAGS_COVERAGE) -lm
	./test 
	lcov -t "gcov" -o gcov.info -c -d .  
	genhtml -o report gcov.info
	open report/index-sort-f.html


clang-format:
	clang-format -i *.c *.h 
	clang-format -n *.c *.h 

clean:
	rm -rf *.o *.a *.gcno *.gcda *.gcov *.out *.info out
	rm -rf gcov.info *.gcda *.gcno
	rm -rf report
	rm -rf test
	rm -rf 3DViewer 
