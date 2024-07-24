#include <stdio.h>

int main() {
    int row, col, sum = 0;

    printf("Enter Value of Row: ");
    scanf("%d", &row);
    printf("Enter Value of Col: ");
    scanf("%d", &col);

    int box1[row][col], box2[row][col];

    printf("Box 1 \n");
    printf("--------- \n");
    for(int r = 0; r < row; r++)
    {
        for(int c = 0; c < col; c++)
        {
            printf("Enter Value of Array Row[%d] col[%d]: ", r, c);
            scanf("%d", &box1[r][c]);
        }
    }
    printf("\n");

    printf("Box 2 \n");
    printf("--------- \n");
    for(int r = 0; r < row; r++)
    {
        for(int c = 0; c < col; c++)
        {
            printf("Enter Value of Array Row[%d] col[%d]: ", r, c);
            scanf("%d", &box2[r][c]);
        }
    }
    printf("\n");

    printf("sum \n");
    printf("--------- \n");
    for(int r = 0; r < row; r++)
    {
        for(int c = 0; c < col; c++)
        {
            sum = box1[r][c] + box2[r][c];
            printf("%d ", sum);
        }
        printf("\n");
    }
}