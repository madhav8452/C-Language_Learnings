#include <stdio.h>

int main() {
    int size;

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
            printf("%d ", box[row][col]);
        }
        printf("\n");
    }
    printf("\n");

    for(int row = 0; row < size; row++)
    {
        for(int col = 0; col < size; col++)
        {
            printf("%d ", box[col][row]);
        }
        printf("\n");
    }

}