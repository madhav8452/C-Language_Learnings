#include <stdio.h>
#include <string.h>

int main() {
    char name[50];

    printf("Enter Name: ");
    gets(name);

    strupr(name);
    printf("%s", name);
}