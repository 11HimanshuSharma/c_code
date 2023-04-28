#include<stdio.h>
int main(){
  int n;
  scanf("%d",&n);
  int i,j;
  for (i=1;i<=n;i++){
    for (j==1;j<=n;j++){
      if (i==j){
        printf("%d",i)
      }
      else if (j==i){
        printf("%d",j)
      }
      else{
        printf(" ")
      }
    }
  }
}