#include <stdio.h>
#include <string.h>

int main() {
    char name[50];
    int length;

    printf("Enter Name: ");
    scanf("%s", &name);

    length = strlen(name);
    printf("Length of the string is %d", length);
}