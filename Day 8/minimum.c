#include <stdio.h>

//WAP to find a minimum number.

int main() {
    int a, b;

    printf ("Enter Value of Number A: ");
    scanf("%d", &a);

    printf ("Enter Value of Number B: ");
    scanf("%d", &b);

    if(a < b)
    {
        printf("A is Minimum...");
    }
    else{
        printf("B is Minimum...");
    }

}