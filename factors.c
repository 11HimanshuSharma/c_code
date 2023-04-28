//find a user defined function to find the factors of given numbers
#include<stdio.h>
void fact();
void main(){
  fact();
}
void fact(){
  int n;
  scanf("%d",&n);
  int i;
  for (i=1;i<n;i++){
    if (n%i==0){
      printf("%d\t",i);
    }
  }
}
