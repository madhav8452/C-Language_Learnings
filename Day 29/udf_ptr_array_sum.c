#include<stdio.h>

int udf_ptr(int size, int *ptr)
{
    int sum = 0;

    for(int i = 0; i < size; i++)
    {
        sum = sum + *ptr + i;
    }

    return sum;
}

int main()
{
    int size, result;

    printf("Enter size of an array: ");
    scanf("%d", &size);

    int arr[size];

    for(int i = 0; i < size; i++)
    {
        printf("Enter element of an array %d: ", i);
        scanf("%d", &arr[i]);
    }

    result = udf_ptr(size, arr);

    printf("sum of array is %d", result);

    return 0;
}