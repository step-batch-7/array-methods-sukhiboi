#include "array.h"

Array_ptr filter(Array_ptr src, Predicate predicate)
{
    int temp[src->length], count = 0;
    for (int i = 0; i < src->length; i++)
    {
        if ((*predicate)(src->array[i]))
        {
            temp[count] = src->array[i];
            count++;
        }
    }
    Array_ptr filtered_array = create_array(count);
    for (int i = 0; i < count; i++)
        filtered_array->array[i] = temp[i];
    return filtered_array;
}