#include<stdio.h>
int name(int n);
int main(){
  int a;
  printf("Enter number");
  scanf("%d",a);
  name(a);

}

int name(int n){
  if (n<=7) && (n>0) {
    if n==1{
      printf("num is one");
    }
    else if n==2{
      printf("num is two");
    }
    else if n==3{
      printf("num is three");
    }
    else if n==4{
      printf("num is four");
    }
    else if n==5{
      printf("num is five");
    }
    else if n==6{
      printf("num is six");
    }
    else if n==7{
      printf("num is seven");
    }
    else{
      printf("Invalid");
    }
  }

  else{
    printf("Invalid");
  }
}