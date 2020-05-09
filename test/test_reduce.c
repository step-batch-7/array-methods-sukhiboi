#include <stdio.h>
#include "array.h"
#include "my_assert.h"

int sum(int num_1, int num_2)
{
    return num_1 + num_2;
}

void test_reduce_with_some_elements_in_array(void)
{
    Array_ptr src = create_array(3);
    src->array[0] = 1;
    src->array[1] = 10;
    src->array[2] = 12;
    int result = reduce(src, 0, &sum);
    assert(23, result, "Result should be sum of all the numbers in the given array");
}

void test_reduce_with_some_elements_in_array_with_context_other_than_zero(void)
{
    Array_ptr src = create_array(3);
    src->array[0] = 1;
    src->array[1] = 10;
    src->array[2] = 12;
    int result = reduce(src, 10, &sum);
    assert(33, result, "Result should be sum of all the numbers plus 10 in the given array");
}

void test_reduce()
{
    printf("\nRunning test for map\n");
    test_reduce_with_some_elements_in_array();
    test_reduce_with_some_elements_in_array_with_context_other_than_zero();
}