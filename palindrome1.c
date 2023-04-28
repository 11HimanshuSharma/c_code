// func to check palindrome or not
#include<stdio.h>
int reverse();
int main(){
  reverse();

}

int reverse(){
  int n;
  scanf("%d",&n);
  
  int rem, rev;
  while (n!=0)
  {
    rem = n%10;
    n = n/10;
    rev = rev*10+rem;
  }
  if (rev==n){
    printf("is palindrome");
  }
}