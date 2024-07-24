#include <stdio.h>

int main() {
    int i, n, range, multi;

    printf("Enter input upto the Table Number: ");
    scanf("%d", &n);

    for(range = 1; range <= n; range++)
    {   
        for(i = 1; i <= 10; i++)
        {   
            multi = range * i;
            printf("%d x %d = %d \n", range, i, multi);
        }
        printf("\n");
    }
}