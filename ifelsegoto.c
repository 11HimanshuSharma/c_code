#include<stdio.h>
void main(){
  int a;
  printf("Please enter any Number: ");
  
  scanf("%d",&a);
  if (a%2==0)
  
  goto even;
  else
  goto odd;
  even:
  printf("%d is Even Number", a);
  return;
  odd:
  printf("%d is odd Number", a);
  
  
}