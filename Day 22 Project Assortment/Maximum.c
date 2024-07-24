#include <stdio.h>

int main() {
    int size, max = 0;

    printf("Enter Size: ");
    scanf("%d", &size);

    int box[size][size];

    for(int row = 0; row < size; row++)
    {
        for(int col = 0; col < size; col++)
        {
            printf("Enter Value of an Array Row[%d] Col[%d]: ", row, col);
            scanf("%d", &box[row][col]);
        }
    }

    for(int row = 0; row < size; row++)
    {
        for(int col = 0; col < size; col++)
        {
            if(box[row][col] > max)
            {
                max = box[row][col];
            }
        }
    }

    printf("Max is %d", max);
}