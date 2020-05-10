#include "array_void.h"

Object reduce_void(ArrayVoid_ptr src, Object init, ReducerVoid reducer)
{
    Object result = init;
    for (int i = 0; i < src->length; i++)
        result = (*reducer)(result, src->array[i]);
    return result;
}