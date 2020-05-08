#include "array.h"

int square(int value)
{
    return value * value;
}

void run_map()
{
    Array *src = create_array(4);
    src->array[0] = 1;
    src->array[1] = 10;
    src->array[2] = 12;
    src->array[3] = 19;
    display(map(src, &square));
}

int main(void)
{
    run_map();
    return 0;
}