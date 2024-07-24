#include <stdio.h>

int main() {
    int size;
    float sum = 0, avg;

    printf("Enter Value of size: ");
    scanf("%f", &size);

    int box[size][size];

    for(int row = 0; row < size; row++)
    {
        for(int col = 0; col < size; col++)
        {
            printf("Enter Value of Array [Row %d][col %d]: ", row, col);
            scanf("%d", &box[row][col]);
        }
    }

    for(int row = 0; row < size; row++)
    {
        for(int col = 0; col < size; col++)
        {
            printf("%d ", box[row][col]);
            sum = sum + box[row][col];
        }
        printf("\n");
    }
    printf("sum is %.2f \n", sum);

    avg = sum / (size * size);
    printf("Avg of an Array: %.2f", avg);
}