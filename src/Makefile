FLAGS= -Wall -Wextra -Werror
STD= -std=c11

all: s21_math.a

style:
	clang-format -i *.c
	clang-format -n *.c

s21_math.a: clean s21_math
	ar rc libs21_math.a s21_*.o
	ranlib libs21_math.a

s21_math: s21_math.c s21_math.h
	gcc ${FLAGS} ${STD} -c s21_math.c

dvi: 
	mkdir -p docs
	doxygen Doxyfile
	mv html latex docs
	open docs/html/index.html

test: s21_math.a test/test.c
	gcc ${FLAGS} ${STD} -c test/test.c
	gcc -fprofile-arcs -ftest-coverage -L. -ls21_math test.o -lcheck -lm -lpthread -o run_tests
	./run_tests

git: clean
	git add -A
	git commit -m "$m"
	git push origin "$b"


gcov_report: test
	mkdir report
	./run_tests
	gcov -f *.gcno
	gcovr -r . --html --html-details -o report/report.html

clean:
	rm -rf *.o *.gcov *.gcno *.gcda run_tests s21_math libs21_math.a report docs
