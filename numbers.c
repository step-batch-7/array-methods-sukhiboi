#include <stdio.h>
#include "array.h"

int square(int value);
Bool is_even(int value);
int sum(int num_1, int num_2);

void run_map();
void run_filter();
void run_reduce();
Array_ptr create_simple_array(void);

int square(int value)
{
    return value * value;
}

Bool is_even(int value)
{
    if (value % 2 == 0)
        return True;
    return False;
}

int sum(int num_1, int num_2)
{
    return num_1 + num_2;
}

Array_ptr create_simple_array(void)
{
    Array_ptr src = create_array(4);
    src->array[0] = 1;
    src->array[1] = 10;
    src->array[2] = 12;
    src->array[3] = 19;
    return src;
}

void run_map()
{
    Array_ptr src = create_simple_array();
    display(map(src, &square));
}

void run_filter()
{
    Array_ptr src = create_simple_array();
    display(filter(src, &is_even));
}

void run_reduce()
{
    Array_ptr src = create_simple_array();
    printf("result: %d", reduce(src, 0, &sum));
}

int main(void)
{
    printf("\nRunning map\n");
    run_map();
    printf("\nRunning filter\n");
    run_filter();
    printf("\nRunning reduce\n");
    run_reduce();
    return 0;
}