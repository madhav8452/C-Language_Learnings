#include <stdio.h>
#include <string.h>

int main(){
    char email[] = "madhavrathod019@gmail.com";
    char password[] = "madhav@123";

    char username[100], userpass[100];

    printf("Enter Email: ");
    scanf("%s", &username);
    printf("Enter Password: ");
    scanf("%s", &userpass);

    if(strcmp(email, username) == 0 && strcmp(password, userpass) == 0)
    {
        printf("Login Successfull...");
    }
    else
    {
        printf("Login Faild! Invalid Credentials.");
    }
}