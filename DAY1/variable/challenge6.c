#include <stdio.h>

 int main(){
   int a , b ; 
  printf("veuiller entrer la valeur de a:");
  scanf("%d",&a);
  printf("veuillez entrer la valeur de b :");
  scanf("%d",&b);
  printf(" A + B = %d \n",a+b);
  printf(" A -B = %d \n",a-b);
  printf(" A*B = %d \n",a*b);
  if (b!=0)
  printf("A/B = %d \n",a/b);
  else 
  printf("error");
  
return 0 ;
}