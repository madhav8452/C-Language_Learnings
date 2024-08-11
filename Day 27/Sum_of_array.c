#include<stdio.h>

int sum(int size, int arr[])
{
    int sum = 0;

    for(int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
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
        printf("Enter Value of an array %d: ", i);
        scanf("%d", &arr[i]);
    }

    result = sum(size, arr);

    printf("Array of sum is %d", result);

    return 0;
}