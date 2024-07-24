#include <stdio.h>
#define a 0.5

int main() {
    int b;
    int h;
    int totle;

    printf("Enter the value of b => ");
    scanf("%d", &b);

    printf("Enter the value of h => ");
    scanf("%d", &h);

    totle = a * (b * h);
    printf("Area of Triangle is => %d", totle);

    return 0;
}