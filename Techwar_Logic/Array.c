#include<stdio.h>

int main(){
    int size;

    printf("Enter size of an array: ");
    scanf("%d", &size);

    int arr[size];

    for(int i = 0; i < size; i++)
    {
        printf("Enter value of an array %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int d = 3;
    int temp[size];

    for(int i = 0; i < size; i++)
    {
        temp[i] = arr[(i + d) % size];
    }

    for(int i = 0; i < size; i++)
    {
        arr[i] = temp[i];
    }

    printf("Array after rotation: ");
    for(int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}