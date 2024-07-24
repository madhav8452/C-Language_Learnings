#include <stdio.h>

int main() {
    int size, sum = 0;

    printf("Ente Row & Column size: ");
    scanf("%d", &size);

    int box[size][size];

    for(int row = 0; row < size; row++)
    {
        for(int col = 0; col < size; col++)
        {
            printf("Enter value of Array Row[%d] col[%d]: ", row, col);
            scanf("%d", &box[row][col]);
        }
    }

    for(int row = 0; row < size; row++)
    {
        for(int col = 0; col < size; col++)
        {
            printf("%d ", box[row][col]);
        }
        printf("\n");
    }

    for(int row = 0; row < size; row++)
    {
        for(int col = 0; col < size; col++)
        {
            if(row == col)
            {
                sum = sum + box[row][col];
            }
        }
    }

    printf("The sum of diagonal elements of an Array: %d", sum);
}