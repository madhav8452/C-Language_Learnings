#include <stdio.h>

int main () {
    float salary, hra, da, ta, gross;

    printf("Enter the Value of Salary => ");
    scanf("%f", &salary);

    printf("Enter the Value of hra => ");
    scanf("%f", &hra);

    printf("Enter the Value of da => ");
    scanf("%f", &da);

    printf("Enter the Value of ta => ");
    scanf("%f", &ta);

    hra = salary * (hra / 100);
    da = salary * (da / 100);
    ta = salary * (ta / 100);

    gross = salary + hra + da + ta;
    printf("Totle Base Salary is %0.2f", gross);

    return 0;
}