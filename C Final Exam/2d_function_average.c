#include<stdio.h>

float average(int size, int box[size][size])
{
    float sum = 0;

    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size; j++)
        {
            sum += box[i][j];
        }
    }

    return sum / (size * size);
}

int main()
{
    int size;
    float result;

    printf("Enter size of an array: ");
    scanf("%d", &size);

    int box[size][size];

    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size; j++)
        {
            printf("Enter value of an array Row[%d] Col[%d]: ", i, j);
            scanf("%d", &box[i][j]);
        }
    }

    result = average(size, box);

    printf("Average of an array is %.2f", result);

    return 0;
}