#include<stdio.h>

int is_divisible_by_3_and_5(int num)
{
    return num % 3 == 0 && num % 5 == 0;
}
int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if(is_divisible_by_3_and_5(number))
    {
        printf("%d is divisible by both 3 and 5\n", number);
    }
    else
    {
        printf("%d is not divisible by both 3 and 5\n", number);
    }

    return 0;
}