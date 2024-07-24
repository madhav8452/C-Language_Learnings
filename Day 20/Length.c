#include <stdio.h>

int main() {
     int size;

    printf("Enter the Value of Size: ");
    scanf("%d", &size);

    int box[size];

    for(int i = 0; i < size; i++)
    {
        printf("Enter the Value of %d: ", i);
        scanf("%d", &box[i]);
    }

    for(int i = 0; i < size; i++)
    {
        printf("Value of %d: %d \n", i, box[i]);
    }

    printf("Length of An Arrey: %d", box[size]);
    return 0;
}