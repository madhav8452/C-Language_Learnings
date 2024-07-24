#include <stdio.h>

int main() {
    int a = 1, num;

    printf("Enter any Number: ");
    scanf("%d", &num);

    while(a <= num)
    {
        printf("%d \n", a);
        a++;
    }

    return 0;
}