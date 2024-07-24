#include <stdio.h>

int main() {
    int size, row, col, sum1 = 0, sum2 = 0;

    printf("Enter Size: ");
    scanf("%d", &size);

    int box[size][size];

    for(int row = 0; row < size; row++)
    {
        for(int col = 0; col < size; col++)
        {
            printf("Enter Array Row[%d] Col[%d]: ", row, col);
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

    printf("Enter Row: ");
    scanf("%d", &row);

    switch (row)
    {
    case 1:
    for(int row = 0; row < size; row++)
    {
        for(int col = 0; col < size; col++)
        {
            if(row == 0)
            {
                sum1 = sum1 + box[row][col];
            }
        }
    }
    printf("Sum is %d \n", sum1);
    break;

    case 2:
    for(int row = 0; row < size; row++)
    {
        for(int col = 0; col < size; col++)
        {
            if(row == 1)
            {
                sum1 = sum1 + box[row][col];
            }
        }
    }
    printf("Sum is %d \n", sum1);
    break;

    case 3:
    for(int row = 0; row < size; row++)
    {
        for(int col = 0; col < size; col++)
        {
            if(row == 2)
            {
                sum1 = sum1 + box[row][col];
            }
        }
    }
    printf("Sum is %d \n", sum1);
    break;
    
    default:
    break;
    }
    

    printf("Enter Col: ");
    scanf("%d", &col);

    switch (col)
    {
    case 1:
    for(int row = 0; row < size; row++)
    {
        for(int col = 0; col < size; col++)
        {
            if(col == 0)
            {
                sum2 = sum2 + box[row][col];
            }
        }
    }
    printf("Sum is %d \n", sum2);
    break;

    case 2:
    for(int row = 0; row < size; row++)
    {
        for(int col = 0; col < size; col++)
        {
            if(col == 1)
            {
                sum2 = sum2 + box[row][col];
            }
        }
    }
    printf("Sum is %d \n", sum2);
    break;

    case 3:
    for(int row = 0; row < size; row++)
    {
        for(int col = 0; col < size; col++)
        {
            if(col == 2)
            {
                sum2 = sum2 + box[row][col];
            }
        }
    }
    printf("Sum is %d \n", sum2);
    break;
    
    default:
        break;
    }

}