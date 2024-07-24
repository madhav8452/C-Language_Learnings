#include <stdio.h>

int main() {
    char box[100];

    printf("Enter string: ");
    gets(box);

    for(int i = 0; box[i] != '\0'; i++)
    {
        if(box[i] >= 'a' && box[i] <= 'z')
        {
            box[i] = box[i] - 32;
        }
        else if(box[i] >= 'A' && box[i] <= 'Z')
        {
            box[i] = box[i] + 32;
        }
        printf("%c", box[i]);
    }
}