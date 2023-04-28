#include<stdio.h>
void main(){
  int a;
  scanf("%d",&a);
  int rem;
  int sum = 0;
  while (a!=0){
    rem = a%10;
    sum = sum + rem;
    a = a/10;
  }
  printf("%d",sum);
}