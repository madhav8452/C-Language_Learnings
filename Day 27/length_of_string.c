#include<stdio.h>

int size(char str[])
{
    int count = 0;

    for(int i = 0; str[i] != '\0'; i++)
    {
        count++;
    }

    return count;
}

int main()
{
    char str[100];
    int result;

    printf("Enter string: ");
    scanf("%s", &str);

    result = size(str);

    printf("Length of string is %d", result);

    return 0;
}