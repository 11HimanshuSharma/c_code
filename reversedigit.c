#include<stdio.h>
void main(){
  int a;
  printf("Please enter any Value: ");
  scanf("%d",&a);
  int rem,reverse;
  reverse = 0;
  while (a!=0)
  {
    rem = a%10;
    reverse = reverse*10 +  rem;
    a = a/10;
  }
  printf("%d",reverse);
}