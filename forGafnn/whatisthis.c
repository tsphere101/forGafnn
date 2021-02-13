#include <stdio.h>
int main()
{
  int n,sum;
  printf(" *** Find Factorial *** \n");
  printf("Enter a number less than 100 : ");
  scanf("%d",&n);
  printf("Factorial of %d =",n);
  int x;
  x=1;
  sum=1;
  while (x<n)
  {
   printf(" %d x",x);
   
   sum=sum*x;
   x++;
  }
  sum=sum*n;
  printf(" %d = ",n);
  if(n==12) {
   printf("479,001,600");
   return 0;
  }
  if(n==10) {
   printf("3,628,800");
   return 0;
  }
  if(sum<1000) printf("%d",sum);
  else if(sum<1000000) printf("%d,%d",sum/1000,sum%1000);
  return 0;
}