#include <stdio.h>

void sum()
{
    int a, b, sum;

    printf("Enter Value of A: ");
    scanf("%d", &a);
    printf("Enter Value of B: ");
    scanf("%d", &b);

    sum = a + b;
    printf("Sum is %d", sum);
}

int main()
{
    sum ();
    return 0;
}