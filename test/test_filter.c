#include <stdio.h>
#include "array.h"
#include "my_assert.h"

Bool is_even(int value)
{
    if (value % 2 == 0)
        return True;
    return False;
}

void test_filter_with_some_elements_in_array(void)
{
    Array_ptr src = create_array(3);
    src->array[0] = 1;
    src->array[1] = 10;
    src->array[2] = 12;
    Array_ptr result = filter(src, &is_even);
    assert(2, result->length, "Length of filtered array should be 2");
    assert(10, result->array[0], "Fist element should be the first even number of the given array i.e 10");
    assert(12, result->array[1], "Fist element should be the first even number of the given array i.e 12");
}

void test_filter()
{
    printf("\nRunning test for filter\n");
    test_filter_with_some_elements_in_array();
}