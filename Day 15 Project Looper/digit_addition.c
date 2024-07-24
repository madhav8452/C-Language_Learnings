#include <stdio.h>

int main() {
    int num, firstdigit, lastdigit, sum = 0;

    printf("Enter Number: ");
    scanf("%d", &num);

    lastdigit = num % 10;
    // firstdigit = num;

    while(num >= 10)
    {
        num = num / 10;
    }
    firstdigit = num;

    sum = firstdigit + lastdigit;
    printf("Sum of First & Last Digit: %d", sum);

    return 0;
}