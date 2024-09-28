#include <stdio.h>
int main() {
int s1, s2, s3;
printf("Enter three test scores: ");
scanf("%d %d %d", &s1, &s2, &s3);
if (s1 > 50 && s2 > 50 && s3 > 50)
 {
printf("You passed all the tests.\n");
} 
else {
printf("You did not pass all the tests.\n");
}
return 0;
}