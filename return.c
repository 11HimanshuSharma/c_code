#include<stdio.h>
int square();
int main(){
  int i;
  for (i=1;i<=10;i++){
    printf("%d \n",square());
  }

}

int square(){
  int a ;
  printf("Please enter any value: ");
  scanf("%d",&a);
  return a*a;
}