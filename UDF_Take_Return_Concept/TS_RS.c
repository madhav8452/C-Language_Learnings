#include<stdio.h>

int sum(int a, int b)
{
    int sum;

    sum = a + b;
    return sum;
}

int main()
{
    int a, b, x;

    printf("Enter Value of A: ");
    scanf("%d", &a);
    printf("Enter Value of B: ");
    scanf("%d", &b);

    x = sum(a,b);

    printf("Sum is %d", x);

    return 0;
}