#include <stdio.h>

int main() {
    int p, n;
    float r, simplei;

    printf("Enter value of P => ");
    scanf("%d", &p);

    printf("Enter value of r => ");
    scanf("%f", &r);

    printf("Enter value of n => ");
    scanf("%d", &n);

    simplei = p * r * n / 100;
    printf("Simple Interest is => %.2f", simplei);

    return 0;
}