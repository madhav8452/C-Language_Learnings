#include <stdio.h>

int main() {
    int row, col;

    for(row = 1; row <= 5; row++)
    {
        for(col = 5; col >= row; col--)
        {
            printf("%d ", row);
        }
        printf("\n");
    }

    return 0;
}
