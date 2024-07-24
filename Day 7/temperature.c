#include <stdio.h>

int main () {
    int c, f;

    printf("Enter the Value of C => ");
    scanf("%d", &c);

    f = (c * 59) + 32;
    printf("The Temperature in Fahrenheit is %d", f);
}