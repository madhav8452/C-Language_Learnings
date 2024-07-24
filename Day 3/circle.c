#include <stdio.h>
#define pi 3.14

int main() {
    int r;
    int totle;

    printf("Enter the Value of r: ");
    scanf("%d", &r);

    totle = pi * (r*r);

    printf ("Area of circle is %d", totle);

    return 0;

}