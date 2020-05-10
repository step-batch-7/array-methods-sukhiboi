#ifndef __ARRAY_H
#define __ARRAY_H
typedef enum
{
  False,
  True
} Bool;

typedef int (*Mapper)(int);
typedef Bool (*Predicate)(int);
typedef int (*Reducer)(int, int);
typedef int *int_ptr;

typedef struct
{
  int_ptr array;
  int length;
} Array;

typedef Array *Array_ptr;

Array_ptr map(Array_ptr src, Mapper mapper);
Array_ptr filter(Array_ptr src, Predicate predicate);
int reduce(Array_ptr src, int init, Reducer reducer);

Array_ptr create_array(int length);
void display(Array_ptr array);

#endif
