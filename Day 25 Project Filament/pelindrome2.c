#include <stdio.h>

int main() {
    int count = 0, i = 0, j = 0, is_pelindrome = 1;
    char str[100];
    char newStr[100];

    printf("Enter String: ");
    scanf("%s", &str);

    for(i = 0; str[i] != '\0'; i++)
    {
        count++;
    }
    printf("%d\n", count);

    for(i = count - 1; i >= 0; i--)
    {
        newStr[j] = str[i];
        printf("%c", newStr[j]);
        j++;
    }
    // newStr[j] = '\0';
    // printf("%s", newStr); // for print string have to add '\0' int NewStr[j] to remove Null Character.

    printf("\n");
    
    for(i = 0; i < count; i++)
    {
        if(str[i] != newStr[j])
        {
            is_pelindrome = 0;
            break;
        }
    }

    if(is_pelindrome == 1)
    {
        printf("The given string is pelindrome");
    }
    else
    {
        printf("The given string is not pelindrome");
    }
}