#include "array.h"

int square(int value)
{
    return value * value;
}

Bool is_deivisible_by_two(int value)
{
    if (value % 2  == 0)
        return True;
    return False;
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

void run_filter()
{
    Array *src = create_array(4);
    src->array[0] = 1;
    src->array[1] = 10;
    src->array[2] = 12;
    src->array[3] = 19;
    display(filter(src, &is_deivisible_by_two));
}

int main(void)
{
    run_map();
    run_filter();
    return 0;
}