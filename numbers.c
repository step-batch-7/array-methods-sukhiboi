#include <stdio.h>
#include "array_void.h"

void int_displayer(Object value)
{
    printf("%d ", *(int_ptr)value);
}

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

Object sum(Object val1, Object val2)
{
    int value1 = *(int_ptr)val1;
    int value2 = *(int_ptr)val2;
    return create_int_element(value1 + value2);
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
    display_void(map_void(src, &square), &int_displayer);
}

void run_filter_void(void)
{
    ArrayVoid_ptr src = create_simple_array_void();
    display_void(filter_void(src, &is_even), &int_displayer);
}

void run_reduce_void(void)
{
    ArrayVoid_ptr src = create_simple_array_void();
    Object init = create_int_element(0);
    Object result = reduce_void(src, init, &sum);
    printf("Result: %d", *(int_ptr)result);
}

int main(void)
{
    printf("\nRunning map\n");
    run_map_void();
    printf("\nRunning filter\n");
    run_filter_void();
    printf("\nRunning reduce\n");
    run_reduce_void();
    return 0;
}