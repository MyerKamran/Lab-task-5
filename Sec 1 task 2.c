#include <stdio.h>

int main() {
    int num;
    printf("Enter a num: ");
    scanf("%d", &num);

    if (num > 0) {
        printf("%d is a Positive num", num);
        if (num % 2 == 0) {
            printf("%d is an Even num", num);
        } else {
            printf("%d is an Odd num", num);
        }
    } else if (num < 0) {
        printf("%d is a Negative num", num);
    } else {
        printf("The num is Zero");
    }

    return 0;
}
