#include <stdio.h>

int main() {
    int x;

    printf("Enter Any Number: ");
    scanf("%d", &x);

    if (x > 0)
    {
        printf("This Number is Positive...");
    }

    else if (x == 0)
    {
        printf("This Number is Neutral...");
    }

    else 
    {
        printf("This Number is Negetive...");
    }

}