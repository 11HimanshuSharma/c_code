#include<stdio.h>
int main(){
int  c = sum();
int d = 9;
int e = d-c;
printf("%d %d",c,e);
}


int sum(){
  int a,b;
  printf("input\n");
  scanf("%d %d",&a,&b);
  return a+b;
}