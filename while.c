// #include<stdio.h>
// void main(){
//   int a = 10;
//   while (a>0){
//     a = a - 1;
//     printf("%d\n", a);
//   }
// }

// #include<stdio.h>
// int main(){
// 	int gfg1 = 1;
// 	int gfg2 = 1;
// 	while (gfg1<10){
// 		gfg2 = gfg2 + 1;
//     printf("Hello");
// 	}
// return 0;  
// }


#include<stdio.h>
int main(){
  int a;
  scanf("%d",&a);
  int b = 1;
  while (b<=10){
    
    printf("%d * %d = %d\n",a,b,a*b);
    b = b+1;

  }
}