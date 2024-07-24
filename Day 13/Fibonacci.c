#include <stdio.h>

int main() {
    int first = 1, second = -1, temp,n ;

    printf("Enter any Number: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
    {
        temp = first + second; // 0, 1, 1, 2, 3, 5, 8, 13
        printf("%d \n", temp); // 0, 1, 1, 2, 3, 5, 8, 13
        second = first; // 1, 0, 1, 1, 2, 3, 5
        first = temp; // 0, 1, 1, 2, 3, 5, 8
    }

}