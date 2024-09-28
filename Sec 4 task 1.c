#include <stdio.h>

int main() {
    int x, y;
    printf("Enter two numbers= ");
    scanf("%d %d", &x, &y);
    printf("Before  x = %d, y = %d", x, y);
    x = x ^ y;
    y = x ^ y;
    x = x ^ y;
    printf("After: x = %d, y = %d", x, y);
    return 0;
}