#include<stdio.h>
void swap(int a, int b);
int main(){
  int a1,b1;
  printf("Enter two values: ");
  scanf("%d %d",&a1,&b1);
  swap(a1,b1);
}
void swap(int a, int b){
  int temp;
  temp = a;
  a = b;
  b = temp;
  printf(("%d %d",a,b));
}