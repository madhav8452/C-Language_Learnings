#include <stdio.h>

int main() {
    int x, y, ans;

    printf("Enter the Value of X => ");
    scanf("%d", &x);

    printf("Enter the Value of Y => ");
    scanf("%d", &y);

    ans = (x + y) * (x + y) * (x + y);
    printf("Answer is %d", ans);
}