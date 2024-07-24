#include <stdio.h>
#define pi 3.14

int main() {
    int r;
    float peri;

    printf("Enter the value of R=> ");
    scanf("%d", &r);

    peri = 2 * pi * r;
    printf("Perimeter of the Circle is %.2f", peri);

    return 0;

}