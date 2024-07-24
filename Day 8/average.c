#include <stdio.h>

int main() {
    float maths, english, science, result;

    printf("Enter the marks of Maths: ");
    scanf("%f", &maths);

    printf("Enter the marks of English: ");
    scanf("%f", &english);

    printf("Enter the marks of Science: ");
    scanf("%f", &science);

    result = (maths + english + science) / 3;
    printf("Result is %.2f", result);

}