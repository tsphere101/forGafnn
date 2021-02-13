#include <stdio.h>
#define MAX 500
int multiply(int x, int res[], int res_size);
void factorial(int n);
void printEquation(int x);
int main()
{
    int x;
    printf(" *** Find Factorial ***\n");
    printf("Enter a number less than 100 : ");
    scanf("%d", &x);
    if (x > 100)
        return 0;
    printf("Factorial of %d = ", x);
    printEquation(x);
    printf(" = ");
    factorial(x);
    return 0;
}

void printEquation(int x)
{
    printf("%d", x);
    for (int i = x - 1; i > 0; i--)
    {
        printf(" x %d", i);
    }
}

void factorial(int n)
{
    int res[MAX];

    res[0] = 1;
    int res_size = 1;

    for (int x = 2; x <= n; x++)
        res_size = multiply(x, res, res_size);

    // Printing
    for (int i = res_size - 1; i >= 0; i--)
    {
        printf("%d", res[i]);
        if(i%3==0 && i!=0)
        printf(",");
    }
}

int multiply(int x, int res[], int res_size)
{
    int carry = 0;

    for (int i = 0; i < res_size; i++)
    {
        int prod = res[i] * x + carry;

        res[i] = prod % 10;

        carry = prod / 10;
    }

    while (carry)
    {
        res[res_size] = carry % 10;
        carry = carry / 10;
        res_size++;
    }
    return res_size;
}
