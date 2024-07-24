#include <stdio.h>

int main() {
    int size, sum = 0;

    printf("Enter Row & column size: ");
    scanf("%d", &size);

    int box[size][size];

    for(int row = 0; row < size; row++)
    {
        for(int col = 0; col < size; col++)
        {
            printf("Enter Value of an Array Row[%d] col[%d]: ", row, col);
            scanf("%d", &box[row][col]);
        }
    }

    for(int row = 0; row < size; row++)
    {
        for(int col = 0; col < size; col++)
        {
            if(row == 0 || col == 0 || row == size - 1 || col == size - 1)
            {
                sum = sum + box[row][col];
            }
        }
    }

    printf("------------------------------------------------------ \n");
    printf("The sum of boundary elements of an Array: %d", sum);
}