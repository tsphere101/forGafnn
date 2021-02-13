#include <stdio.h>
#include <stdbool.h>

bool isPrime(long num)
{
    for (long i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}

void factors(long num)
{
    if (num < 0) // Check if the number is negative
    {
        num = -num; // Make Positive
    }
    if (num == 0)
    {
        printf("%d", 0); // Case 0
        return;
    }
    else if (num == 1)
    {
        printf("%d", 1); // Case 1
        return;
    }

    for (int i = 2; num > 1 && i <= num; i++)
    {
        if (isPrime(i) && num % i == 0)
        {
            num /= i;
            printf("%d ", i);
            i = 2 - 1; // reset i = 2;
        }
    }
}

int main()
{
    printf(" *** Number Factoring ***\n");
    int input = 0;
    printf("Enter number : ");
    scanf(" %d", &input);
    printf("Result : ");
    factors(input);

    return 0;
}