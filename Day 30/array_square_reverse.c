#include<stdio.h>

void square_array(int size, int *ptr)
{
    int **ptr_chained = &ptr;

    for(int x = size - 1; x >= 0; x--)
    {
        int square = *(*ptr_chained + x) * *(*ptr_chained + x);
        printf("%d", square);
        printf("\n");
    }
}

int main()
{
    int size;

    printf("Enter Sie of an array: ");
    scanf("%d", &size);

    int box[size];
    int *ptr = box;

    for(int x = 0; x < size; x++)
    {
        printf("Enter value of an array %d: ", x);
        scanf("%d", ptr + x);
    }

    square_array(size, ptr);

    return 0;
}