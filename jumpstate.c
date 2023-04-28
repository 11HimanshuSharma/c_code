#include<stdio.h>
int main(){
  int n;
  n = 10;
  A:
  printf("%d",n);
  n = n-1;
  if (n>0)
  goto A;

}