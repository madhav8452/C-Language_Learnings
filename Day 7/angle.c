#include <stdio.h>

int main() {
    int a, b, c;

    printf("A => ");
    scanf("%d", &a);

    printf("B => ");
    scanf("%d", &b);

    c = 180 - (a + b);
    printf("C Value is %d", c);
}