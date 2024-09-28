#include <stdio.h>
int main() {
    int age;
    printf("Enter  age=");
    scanf("%d", &age);

    if (age >= 0) {
        if (age <= 12) 
        {
            printf("The person is a Child");
        }
         else if (age <= 19) 
        {
            printf("The person is a Teenager");
        } 
        else if (age < 60 ) 
        {
            printf("The person is an Adult");
        }
         else {
            printf("The person is a Senior");
        }
    } else {
        printf("Invalid age entered");
    }
    return 0;
}
