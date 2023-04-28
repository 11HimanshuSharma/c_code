//func to find the factorial and return factorial value;
int facto();
int main(){
  
  printf("factorial = %d",facto());

}

int facto(){
  int a;
  scanf("%d",&a);
  int i;
  int facto1;
  facto1 = 1;
  for (i=1;i<=a;i++) {
    facto1 = facto1*i;
  }
  return facto1;
}