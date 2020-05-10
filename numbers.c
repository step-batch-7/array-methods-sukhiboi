#include <stdio.h>
#include "array_void.h"

Object square(Object value)
{
    int given_value = *(int_ptr)value;
    return create_int_element(given_value * given_value);
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
    ArrayVoid_ptr mapped_result = map_void(src, &square);
    display_int(mapped_result);
}

int main(void)
{
    printf("\nRunning map\n");
    run_map_void();
    return 0;
}