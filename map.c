#include "array.h"

Array_ptr map(Array_ptr src, Mapper mapper)
{
    Array_ptr mapped_array = create_array(src->length);
    for (int i = 0; i < src->length; i++)
        mapped_array->array[i] = (*mapper)(src->array[i]);
    return mapped_array;
}