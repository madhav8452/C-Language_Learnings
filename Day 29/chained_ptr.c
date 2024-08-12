#include<stdio.h>

int main()
{
    int size;

    printf("Enter size of an array: ");
    scanf("%d", &size);

    int arr[size];
    int *ptr = arr;
    int **ptr_chained = &ptr;

    for(int i = 0; i < size; i++)
    {
        printf("Enter value of an array %d: ", i);
        scanf("%d", *ptr_chained + i);
    }

    for(int i = 0; i < size; i++)
    {
        printf("%d", *(*ptr_chained + i));
        printf("\n");
    }

    return 0;
}