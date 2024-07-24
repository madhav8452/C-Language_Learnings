#include <stdio.h>

int main() {
    int size;
    float sum = 0, avg;

    printf("Enter value of size: ");
    scanf("%d", &size);

    int box[size];

    for(int i = 0; i < size; i++)
    {
        printf("Enter Value of Array %d: ", i);
        scanf("%d", &box[i]);
    }

    for(int i = 0; i < size; i++)
    {
        sum = sum + box[i];
    }

    printf("Sum of Array: %.2f \n", sum);

    avg = sum / size;

    printf("Average of an Array: %.2f", avg);

    return 0;
}