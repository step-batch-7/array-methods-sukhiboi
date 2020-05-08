#include "array.h"

Array *filter(Array *src, Predicate predicate)
{
    int length_filtered_array = 0;
    for (int i = 0; i < src->length; i++)
        if (predicate(src->array[i]) == True)
        {
            length_filtered_array++;
        }
    Array *filtered_array = create_array(length_filtered_array);
    for (int i = 0, idx = 0; i < src->length; i++)
        if (predicate(src->array[i]) == True)
        {
            filtered_array->array[idx] = src->array[i];
            idx++;
        }
    return filtered_array;
}