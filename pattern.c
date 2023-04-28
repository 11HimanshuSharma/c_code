#include<stdio.h>
// void sum
// int main(){
//   printf("%5d\n",1);
//   printf("%5d\n",12);
//   printf("%5d\n",123);
//   printf("%5d\n",1234);
//   printf("%5d\n",12345);
// }

int main(){
  int n; 
  scanf("%d",&n);
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      printf("%d",j);
    }
    printf("\n");  
  }
  return 0;
}


// int main(){
//   printf("Enter number of rows : ");
//   int num;
//   scanf("%d",&num);
//   for (int i = 1; i <= num; i++)
//   {
//     int a=1;
//     for (int j = 1; j <= num; j++)
//     {
//       if(j>0 && j<(num-i+1))printf(" ");
//       else{
//         printf("%d",a);
//         a++;
//       }
//     }
//     int b = i-1;
//     for (int x = 1; x < i; x++)
//     {
//       printf("%d",b);
//       b--;
//     }
    
//     printf("\n");
//   } 
//   return 0;
// }

