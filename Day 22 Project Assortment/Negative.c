#include <stdio.h>

int main() {
    int size;

    printf("Enter Size of an Array: ");
    scanf("%d", &size);

    int box[size];

    for(int i = 0; i < size; i++)
    {
        printf("Enter Value of an Array %d: ", i);
        scanf("%d", &box[i]);
    }
    printf("\n");
    
    printf("Negative elements from an array. \n");
    for(int i = 0; i < size; i++)
    {
        if(box[i] < 0)
        {
            printf("%d, ", box[i]);
        }
    }

}