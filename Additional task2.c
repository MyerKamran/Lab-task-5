#include <stdio.h>
int main() {
    float attendance, assignments, test, total;
    
    printf("Enter attendance score (out of 10) ");
    scanf("%f", &attendance);
    printf("Enter assignment score (out of 40) ");
    scanf("%f", &assignments);
    printf("Enter test score (out of 50) ");
    scanf("%f", &test);   
    total = attendance + assignments + test;
    printf("Final grade: ");
    if (total >= 90) {
        printf("A");
    } else if (total >= 80) {
        printf("B");
    } else if (total >= 70) {
        printf("C");
    } else if (total >= 60) {
        printf("D");
    } else {
        printf("F");
    }
    return 0;
}