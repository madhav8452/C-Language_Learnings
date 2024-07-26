#include <stdio.h>

int main() {
    int size;

    printf("Enter Size: ");
    scanf("%d", &size);

    int box[size];

    int *ptr = box;

    for(int i = 0; i < size; i++)
    {
        printf("Enter Array %d: ", i);
        scanf("%d", ptr+i);
    }

    for(int i = 0; i < size; i++)
    {
        if(*(ptr+i) % 2 == 0)
        {
            printf("%d ", *(ptr+i));
        }
    }
}