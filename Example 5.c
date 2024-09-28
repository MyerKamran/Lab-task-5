#include <stdio.h>
int main() {
int no;
printf("Enter a no: ");
scanf("%d", &no);
(no % 2 == 0) ? printf("Even\n") : printf("Odd\n");
return 0;
}