#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char pass[100];
    int length, alpha = 0, digit = 0, special = 0;

    printf("Enter Password: ");
    scanf("%s", &pass);

    length = strlen(pass);

    if(length <= 6)
    {
        printf("Password must be at least 6 characters.\n");
    }
    
    alpha, digit, special = 0;

    for(int i = 0; i < length; i++)
    {
        if(isalpha(pass[i]))
        {
            alpha = 1;
        }
        else if(isdigit(pass[i]))
        {
            digit = 1;
        }
        else
        {
            special = 1;
        }
    }

    if(alpha && digit && special)
    {
        printf("Password is strong.\n");
    }
    else
    {
        printf("Password is week.");
    }
}