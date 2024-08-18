#include<stdio.h>

void odd(int size, int box[size])
{
    for(int i = 0; i < size; i++)
    {
        if(box[i] % 2 == 1)
        {
            printf("%d\n", box[i]);
        }
    }
}

int main()
{
    int size;

    printf("Enter size of an array: ");
    scanf("%d", &size);

    int box[size];

    for(int i = 0; i < size; i++)
    {
        printf("Enter value of an array %d: ", i);
        scanf("%d", &box[i]);
    }

    odd(size, box);

    return 0;
}