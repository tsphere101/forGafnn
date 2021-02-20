#include <stdio.h>
int main()
{
 int x,i,j;
 printf("Enter : ");
 scanf("%d", &x);
 for(i=0;i<(x/2);i++){
  for(j=0;j<=i;j++) {
   printf("*");
  }
 printf("\n");
 }


 for(i=x;i>=(x/2);i--) {
  for(j=0;j<=(i-3);j++){
   printf("*");
  }
  printf("\n");
 }
 return 0;

}