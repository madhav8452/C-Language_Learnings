#include <stdio.h>

int main() {
    int size, r,c,rowsum = 0, colsum = 0;

    printf("Enter Array size: ");
    scanf("%d", &size);

    int box[size][size];

    for(int row = 0; row < size; row++)
    {
        for(int col = 0; col < size; col++)
        {
            printf("Enter an Value of array row[%d] col[%d]: ", row, col);
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

    printf("Enter row: ");
    scanf("%d", &r);

    for(int row = 0; row < size; row++)
    {
        for(int col = 0; col < size; col++)
        {
            if(row == r)
            {
                rowsum = rowsum + box[row][col];
            }
        }
    }

    printf("Your Entered Row sum: %d\n", rowsum);
    
    printf("Enter col: ");
    scanf("%d", &c);

    for(int row = 0; row < size; row++)
    {
        for(int col = 0; col < size; col++)
        {
            if(col == c)
            {
                colsum = colsum + box[row][col];
            }
        }
    }

    printf("Your Entered Col sum: %d\n", colsum);
}