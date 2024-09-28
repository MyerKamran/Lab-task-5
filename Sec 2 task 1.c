#include <stdio.h>
int main(){
  int num =0;
  printf("enter a number=");
  scanf("%d", &num);
  if(num%3 == 0 && num%5 == 0){
    printf("The number is divisible by 3 and 5");
  }else{
    printf("the number is not divisible by 3 and 5");
  }
  return 0;
}