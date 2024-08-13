#include<stdio.h>

void cube(int size, int *ptr)
{
    for(int x = 0; x < size; x++)
    {
        for(int y = 0; y < size; y++)
        {
            int cube = *(ptr + x * size + y) * *(ptr + x * size + y) * *(ptr + x * size + y);
            printf("%d ", cube);
        }
        printf("\n");
    }
}

int main()
{
    int size;

    printf("Enter Size of an array: ");
    scanf("%d",&size);

    int box[size][size];
    int *ptr = &box[0][0];

    for(int x = 0; x < size; x++)
    {
        for(int y = 0; y < size; y++)
        {
            printf("Enter value of an array row[%d] col[%d]: ", x, y);
            scanf("%d", ptr + x * size + y);
        }
    }

    cube(size, ptr);

    return 0;
}