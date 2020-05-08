#include "array.h"

Array *filter(Array *src, Predicate predicate)
{
    int temp[src->length], count = 0;
    for (int i = 0; i < src->length; i++)
    {
        if (predicate(src->array[i]) == True)
        {
            temp[i] = src->array[i];
            count++;
        }
    }
    Array *filtered_array = create_array(count);
    for (int i = 0; i < count; i++)
        filtered_array->array[i] = temp[i];
    return filtered_array;
}