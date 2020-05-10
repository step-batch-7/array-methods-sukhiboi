#include <stdio.h>
#include "array_void.h"

Object square(Object value)
{
    int given_value = *(int_ptr)value;
    return create_int_element(given_value * given_value);
}

Bool is_even(Object value)
{
    int given_value = *(int_ptr)value;
    if (given_value % 2 == 0)
        return True;
    return False;
}

ArrayVoid_ptr create_simple_array_void(void)
{
    ArrayVoid_ptr src = create_array_void(4);
    src->array[0] = create_int_element(10);
    src->array[1] = create_int_element(12);
    src->array[2] = create_int_element(3);
    src->array[3] = create_int_element(9);
    return src;
}

void run_map_void(void)
{
    ArrayVoid_ptr src = create_simple_array_void();
    display_int(map_void(src, &square));
}

void run_filter_void(void)
{
    ArrayVoid_ptr src = create_simple_array_void();
    display_int(filter_void(src, &is_even));
}

int main(void)
{
    printf("\nRunning map\n");
    run_map_void();
    printf("\nRunning filter\n");
    run_filter_void();
    return 0;
}