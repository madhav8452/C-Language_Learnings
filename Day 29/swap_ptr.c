#include<stdio.h>

int swap(int *ptr1, int *ptr2)
{
    *ptr1 = *ptr1 + *ptr2;
    *ptr2 = *ptr1 - *ptr2;
    *ptr1 = *ptr1 - *ptr2;

    return *ptr1, *ptr2;
}

int main()
{
    int a, b;

    printf("Enter value of A: ");
    scanf("%d", &a);
    printf("Enter Value of B: ");
    scanf("%d", &b);

    swap(&a, &b);

    printf("A: %d\n", a);
    printf("B: %d\n", b);

    return 0;
}