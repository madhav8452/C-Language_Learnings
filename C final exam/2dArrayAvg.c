#include <stdio.h>

float find_avg(int arr[3][3], int rows, int cols) {
    float sum = 0;
    int total_elements = rows * cols;

    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            sum = sum + arr[i][j];
        }
    }

    return sum / total_elements;
}

int main() {
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int rows = 3, cols = 3;

    float average = find_avg(arr, rows, cols);

    printf("Average of the elements: %.2f\n", average);

    return 0;
}
