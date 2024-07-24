#include <stdio.h>

int main() {
    int row, col;

    for(row = 1; row <= 5; row++)
    {
        for(col = 5; col >= row; col--)
        {
            if(col % 2 == 1)
            {
                printf("1 ");
            }
            else
            {
                printf("0 ");
            }
        }
        printf("\n");
    }
}