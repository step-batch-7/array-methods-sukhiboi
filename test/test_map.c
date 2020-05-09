#include <stdio.h>
#include "array.h"
#include "my_assert.h"

int square(int value)
{
    return value * value;
}

void test_map_with_some_elements_in_array(void)
{
    Array_ptr src = create_array(3);
    src->array[0] = 1;
    src->array[1] = 10;
    src->array[2] = 12;
    Array_ptr result = map(src, &square);
    assert(3, result->length, "Length of mapped array should be same as given array");
    assert(1, result->array[0], "Fist element should be the square of first element of given array");
    assert(100, result->array[1], "Second element should be the square of second element of given array");
    assert(144, result->array[2], "Third element should be the square of third element of given array");
}

void test_map()
{
    printf("\nRunning test for map\n");
    test_map_with_some_elements_in_array();
}