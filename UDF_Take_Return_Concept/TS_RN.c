#include<stdio.h>

void sum(int a, int b)
{
    int sum;

    sum = a + b;
    printf("Sum is %d", sum);
}

int main()
{
    int a, b;

    printf("Enter value of A: ");
    scanf("%d", &a);
    printf("Enter value of B: ");
    scanf("%d", &b);

    sum(a,b);

    return 0;
}