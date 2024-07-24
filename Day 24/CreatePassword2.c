#include <stdio.h>
#include <string.h>

int main() {
    int ltr = 0, dgt = 0, special = 0, length;
    char password[100];

    printf("Enter string: ");
    scanf("%s", &password);

    length = strlen(password);

    if(strlen(password) < 6)
    {
        printf("Password is too short");
    }
    else
    {
        for(int i = 0; i < length; i++)
        {
            char c = password[i]; 
            if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
            {
                ltr = 1;
            }
            else if(c >= '0' && c <= '9')
            {
                dgt = 1;
            }
            else if(c >= '!' && c <= '/' || c >= ':' && c <= '@' || c >= '[' && c <= '`' || c >= '{' && c <= '~')
            {
                special = 1;
            }
        }
    
        if(ltr && dgt && special)
        {
            printf("Password is strong");
        }
        else
        {
            printf("Password is not strong");
        }

        } 
}