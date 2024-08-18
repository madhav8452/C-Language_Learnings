#include<stdio.h>

int main()
{
    int size;

    printf("Enter size of an array: ");
    scanf("%d", &size);

    int box[size];
    int *ptr = box;

    for(int i = 0; i < size; i++)
    {
        printf("Enter value of an array %d: ", i);
        scanf("%d", ptr + i);
    }

    for(int i = 0; i < size; i++)
    {
        if(*(ptr + i) % 2 == 0)
        {
            printf("%d\n", *(ptr + i));
        }
    }

    return 0;
}