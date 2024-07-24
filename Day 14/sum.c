#include <stdio.h>

int main() {
    int i, n, sum = 0;
    
    printf("Enter Any Number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        sum = sum + i;
        printf("%d ", i);
    }
    printf("\n");
    printf("Sum is: %d", sum);
}