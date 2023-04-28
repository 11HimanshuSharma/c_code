// #include<stdio.h>
// void main(){
//   int a,i,j;
//   printf("Please Enter any Vlaue: ");
//   scanf("%d",&a);
//   for (i=1;i<=a;i++){
//     for (j=1;j<=a;j++){
//       printf("%d ",j);
//     }
//     printf("\n");
//   }
// }
#include<stdio.h>
void main(){
  int a,i,j;
  printf("Please enter any value: ");
  scanf("%d",&a);
  for (i=1;i<=a;i++){
    for (j=a;j>=1;j--){
      printf("%d ",j);
    }
    printf("\n");
  }
}