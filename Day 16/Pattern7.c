#include <stdio.h>

int main() {
    char row, col;

    for(row = 'A'; row <= 'E'; row++)
    {
        for(col = row; col >= 'A'; col--)
        {
            printf("%c ", col);
        }
        printf("\n");
    }

    return 0;
}