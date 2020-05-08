#include "array.h"

int reduce(Array_ptr src, int init, Reducer reducer)
{
    int result = init;
    for (int i = 0; i < src->length; i++)
        result = (*reducer)(result, src->array[i]);
    return result;
}