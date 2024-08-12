#include <stdio.h>

void square_array(int size, int *ptr)
{
    int square[size];

    for(int i = 0; i < size; i++)
    {
        square[i] = *(ptr + i) * *(ptr + i);
    }

    for(int i = 0; i < size; i++)
    {
        printf("%d", square[i]);
        printf("\n");
    }
}

int main()
{
    int size;

    printf("Enter the value of an array: ");
    scanf("%d", &size);

    int arr[size];
    int *ptr = arr;

    for(int i = 0; i < size; i++)
    {
        printf("Enter element of an array %d: ", i);
        scanf("%d", ptr + i);
    }

    square_array(size, ptr);

    return 0;
}