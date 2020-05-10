#include "array_void.h"

ArrayVoid_ptr filter_void(ArrayVoid_ptr src, PredicateVoid predicate)
{
    int temp[src->length], count = 0;
    for (int i = 0; i < src->length; i++)
        if ((*predicate)(src->array[i]))
            temp[count++] = *(int_ptr)src->array[i];
    ArrayVoid_ptr filtered_array = create_array_void(count);
    for (int i = 0; i < count; i++)
        filtered_array->array[i] = create_int_element(temp[i]);
    return filtered_array;
}