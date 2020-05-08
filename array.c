#include <stdio.h>
#include <stdlib.h>
#include "array.h"

Array *create_array(int length)
{
    Array *array = malloc(sizeof(Array));
    array->length = length;
    array->array = (int *)malloc(sizeof(int) * array->length);
    return array;
}

void display(Array *array)
{
    for (int i = 0; i < array->length; i++)
        printf("%d ", array->array[i]);
    printf("\n");
}