cp array.c array.h filter.c map.c reduce.c test
cd test
rm -rf *.o
gcc -c *.c
gcc -o run_test *.o
echo "Running tests"
echo "----------------------------------------------"
./run_test
echo "\n"
rm -rf *.o
rm array.c array.h filter.c map.c reduce.c
rm run_test
