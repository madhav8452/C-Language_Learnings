#include <stdio.h>

int main() {
    int num, sum = 0, count = 0, digi;

    printf("Enter Number: ");
    scanf("%d", &num);

    while(num > 0)
    {
        digi = num % 10; // 293 % 10 = 3/ 29 % 10 = 9/ 2 % 10 = 2 
        num = num / 10; // 293 / 10 = 29/ 29 / 10 = 2/ 2 / 10 = 0
        sum = sum + digi; // 0 + 3 = 3 / 3 + 2 = 5/ 5 + 2 = 7
        count++;
    }
    
    printf("Total Digit is %d", count);

    return 0;
}