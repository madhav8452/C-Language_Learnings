#include<stdio.h>

int main()
{
    int x = 10;
    int *ptr = &x;
    int **ptr_to_ptr = &ptr;

    printf("x value is %d", *(*ptr_to_ptr));
}