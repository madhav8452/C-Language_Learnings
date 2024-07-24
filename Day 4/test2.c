#include <stdio.h>

main() {
    float weight1, item1, weight2, item2, avg;

    printf("Enter the value of Weight1 =>");
    scanf("%f", &weight1);

    printf("Enter the value of item1 =>");
    scanf("%f", &item1);

    printf("Enter the value of Weight2 =>");
    scanf("%f", &weight2);

    printf("Enter the value of item2 =>");
    scanf("%f", &item2);
    
    avg = ((weight1 * item1) + (weight2 * item2)) / (item1 + item2);
    printf("Average Value is %f", avg);

    return 0;
}