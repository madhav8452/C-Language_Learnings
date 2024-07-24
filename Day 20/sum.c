#include <stdio.h>

int main() {
    int size, sum;

    printf("Enter Value of size: ");
    scanf("%d", &size);

    int box1[size], box2[size];

    printf("Box 1 \n");
    printf("------ \n");
    for(int i = 0; i < size; i++)
    {
        printf("Enter value of box1 Array %d: ", i);
        scanf("%d", &box1[i]);
    }
    printf("\n");

    printf("Box 2 \n");
    printf("------ \n");
    for(int i = 0; i < size; i++)
    {
        printf("Enter value of box2 Array %d: ", i);
        scanf("%d", &box2[i]);
    }
    printf("\n");

    printf("Sum \n");
    printf("------ \n");
    for(int i = 0; i < size; i++)
    {
        sum = box1[i] + box2[i];
        printf("Sum of Array %d : %d \n", i, sum);
    }
    printf("\n");
}