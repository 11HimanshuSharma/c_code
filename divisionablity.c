// #include<stdio.h>
// int main(){
//   int n;
//   printf("Enter the len");
//   scanf("%d",&n);
//   long data[n];
//   for (int i=0;i<n;i++){
//     scanf("%d",&data[i]);

//   }
//   if (data[n-1] % 10 == 0) {
//     printf("%d",data[n-1]);
//   }
//   else{
//     printf("no");
//   }
// }
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d",&n);
    long data[n];
    for (int i=0;i<n;i++){
        scanf("%ld",&data[i]);
    }
    printf("%d",data[n-1]%10);
    return 0;
}
