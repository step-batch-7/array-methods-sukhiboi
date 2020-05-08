#include "array.h"

Array *map(Array *src, Mapper mapper)
{
    Array *mapped_array = create_array(src->length);
    for (int i = 0; i < src->length; i++)
        mapped_array->array[i] = (*mapper)(src->array[i]);
    return mapped_array;
}