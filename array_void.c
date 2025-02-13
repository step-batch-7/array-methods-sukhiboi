#include <stdio.h>
#include <stdlib.h>
#include "array_void.h"

Object create_int_element(int value)
{
    int_ptr element = malloc(sizeof(int));
    *element = value;
    return (Object)element;
}

ArrayVoid_ptr create_array_void(int length)
{
    ArrayVoid_ptr array = malloc(sizeof(ArrayVoid));
    array->length = length;
    array->array = malloc(sizeof(Object) * array->length);
    return array;
}

void display_void(ArrayVoid_ptr array, Displayer displayer)
{
    for (int i = 0; i < array->length; i++)
        displayer(array->array[i]);
    printf("\n");
}