#include<stdio.h>

int sum()
{
    int a, b, sum;
    
    printf("Enter Value of A: ");
    scanf("%d", &a);
    printf("Enter Value of B: ");
    scanf("%d", &b);

    sum = a + b;

    return sum;
}

int main()
{
    int x;

    x = sum();
    printf("Sum is %d", x);
    return 0;
}