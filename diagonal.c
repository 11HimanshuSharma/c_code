//program to print diagonal
#include<stdio.h>
void main(){
  int a,i,j;
  printf("Please enter any Value: ");
  scanf("%d",&a);
  for (i=1;i<=a;i++){
    for (j=1;j<=a;j++){
      if (i==j){
        printf("%d ",i);
      }
      else{
          printf(" ");
      } 
    }
    printf("\n");
}
}


//reverse diagonal

// #include<stdio.h>
// int main(){
//   int a,i,j;
//   printf("Please enter any Value: ");
//   scanf("%d",&a);
//   for (i=0;i<=a;i++){
//     for (j=a;j>=1;j--){
//       if (j==a-i){
//         printf("%d",j);

//       }
//       else{
//         printf(" ");
//       }
//     }
//     printf("\n");
//   }

// }