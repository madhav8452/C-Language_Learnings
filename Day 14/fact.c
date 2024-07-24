#include <stdio.h>

int main() {
    int i,n, fact = 1;
    
    printf("Enter the Value: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        fact = fact * i;
        printf("%d ", i);
    }

    printf("\n");
    printf("Fact is: %d", fact);
}