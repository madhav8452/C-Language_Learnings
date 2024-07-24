#include <stdio.h>

int main () {
    int a = 12, b = 6;
    int sum = a + b;
    int sub = a - b;
    int mul = a * b;
    int div = a / b;
    int mod = a % b;

    printf ("Addition of %d and %d is %d \n", a, b, sum);
    printf ("Subtraction of %d and %d is %d \n", a, b, sub);
    printf ("Multiplication of %d and %d is %d \n", a, b, mul);
    printf ("Division of %d and %d is %d \n", a, b, div);
    printf ("Modulo of %d and %d is %d \n", a, b, mod);
}