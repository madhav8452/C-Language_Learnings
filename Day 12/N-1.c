#include <stdio.h>

int main() {
    int a = 1, num;

    printf("Enter any Number: ");
    scanf("%d", &num);

    while(num >= a)
    {
        printf("%d \n", num);
        num--;
    }

    return 0;
}