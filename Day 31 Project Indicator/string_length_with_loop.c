#include<stdio.h>

int main()
{
    char str[100];

    printf("Enter string: ");
    gets(str);

    int length = 0;

    for(int x = 0; str[x] != '\0'; x++)
    {
        length++;
    }

    printf("String length is %d", length);

    return 0 ;
}