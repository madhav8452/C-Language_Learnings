#include <stdio.h>
#include <string.h>

int main(){
    char name[50], surname[50];

    printf("Enter Name: ");
    scanf("%s", &name);
    printf("Enter Surname: ");
    scanf("%s", &surname);

    strcat(name, surname);

    printf("%s", name);
}