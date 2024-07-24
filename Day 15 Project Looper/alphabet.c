#include <stdio.h>

int main() {
    char ch = 'A';

    do
    {
        printf("%c \n", ch);
        ch = ch + 4;
    }
    while(ch <= 'Z');
    
    return 0;
}