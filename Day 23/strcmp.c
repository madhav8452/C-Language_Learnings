#include <stdio.h>
#include <string.h>

int main() {
    char str1[50], str2[50];
    int cmp;

    printf("Enter String 1: ");
    scanf("%s", &str1);
    printf("Enter String 2: ");
    scanf("%s", str2);

    cmp = strcmp(str1, str2);

    printf("%d", cmp);

    return 0;

}