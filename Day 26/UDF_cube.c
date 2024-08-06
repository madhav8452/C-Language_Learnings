#include<stdio.h>

int cube(int num)
{
    return num * num * num;
}
int main()
{
    int number, result;

    printf("Enter Number: ");
    scanf("%d", &number);

    result = cube(number);

    printf("The cube of %d is %d", number, result);

    return 0;
}