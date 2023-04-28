//user defined function to count num of digit in a given input
#include<stdio.h>
void count();
void main(){
  count();
}

void count(){
  int a;
  scanf("%d",&a);
  int rem,count1;
  count1 = 0;
  while (a!=0){
    rem = a%10;
    count1++;
    a = a/10;
  }
  printf("%d",count1);
}