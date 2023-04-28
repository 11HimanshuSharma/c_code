#include<stdio.h>
int a = 7;
int num();
int main(){
  num();
  int a= 10;
  printf("value = %d",a);
  return 0;
}
int num(){
  int a = 8;
  printf("%d",a);
  return a;
}