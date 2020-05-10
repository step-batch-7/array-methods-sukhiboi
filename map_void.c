#include <stdio.h>
#include "array_void.h"

ArrayVoid_ptr map_void(ArrayVoid_ptr src, MapperVoid mapper)
{
    ArrayVoid_ptr mapped_array = create_array_void(src->length);
    for (int i = 0; i < src->length; i++)
    {
        mapped_array->array[i] = (*mapper)(src->array[i]);
    }
    return mapped_array;
}