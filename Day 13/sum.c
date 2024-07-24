#include <stdio.h>

int main() {
    int sum = 0, n, i;

    printf("Enter any Value: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    printf("Sum is %d\n", sum);
}