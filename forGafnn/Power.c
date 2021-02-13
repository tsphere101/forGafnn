#include <stdio.h>

long power(int x,int n)
{
    long result = 1;
    for(int i = 0 ; i < n ; i ++)
    {
        result *=x;
    }
    return result;
}

void printEquation(int x, int n)
{
    printf("%d",x);
    for(int i = n-1 ; i > 0 ; i--)
    {
        printf(" x %d",x);
    }
}

void printResult(int x , int n)
{
    printEquation(x,n);
    printf(" = ");
    printf("%ld",power(x,n));
}


int main()
{
    long x,n;
    printf(" *** Power ***");
    scanf(" %ld",&x);
    scanf(" %ld",&n);
    printResult(x,n);
    return 0;
}
