#include<stdio.h>
int main(){
  int n = 3;
  char a[n];
  scanf("%s",&a);
  int i,l,j,k,p;
  l = sizeof(a);
  for (i=0;i<l;i++){
    for (j=0;j<l;j++){
      for (k=0;k<l;k++){
        if (i!=j && j!=k && j!=i && j!=k && k!=i && k!=j){
          p = a[i];
          a[i]=a[j];
          a[j]=a[k];
          a[k]=p;
          printf("%s",a);
          printf("\n");
        }
      }
      
    }
  }
}