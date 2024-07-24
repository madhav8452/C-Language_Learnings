#include <stdio.h>

int main() {
    int i, n, multi;

    printf("Enter Table Number: ");
    scanf("%d", &n);

    for(i = 1; i <= 10; i++)
    {
        multi = n * i;
        printf("%d x %d = %d \n", n, i, multi);
    }
}