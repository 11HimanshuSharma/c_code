#include<stdio.h>
int palindrome();
int main(){
  palindrome();

}


int palindrome(){
  int a;
  scanf("%d",&a);
  int rev,rem;
  while (a!=0){
    rem = a%10;
    rev = rev*10 + rem;
    a = a/10;

  }

  if (rev = a){
    printf("%d is a palindrome");
  }
  else{
    printf("This is not palindrome");
  }
}