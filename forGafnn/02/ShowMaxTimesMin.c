#include <stdio.h>
void printResult(long max, long min);
void setMax(long *arr, long *max);
void setMin(long  *arr, long *min);
long minInArr(long * arr);
long maxInArr(long * arr);
long whichMin(long a,long b);
long whichMax(long a, long b);
void run(); 

void run()
{
    printf(" *** Show max * min ***\n");
    printf("Enter 10 integers : ");

    
    long arr[11];
    long min,max;
    for(int i = 0 ; i< 10 ; i++)
    {
        long temp;
        scanf("%ld", &temp);
        arr[i] = temp;
    }

    max = maxInArr(arr); min = minInArr(arr);

    printResult(max,min);
    
}

void printResult(long max, long min)
{
    printf("%ld * %ld = %ld", max, min, max * min);
}

long maxInArr(long* arr)
{
    long max;
    max = arr[0];
    for(int i = 0 ; i < 10; i ++)
    {
        max = whichMax(max,arr[i]);
    }
    return max;
}

long minInArr(long* arr)
{
    long min;
    min = arr[0];
    for(int i = 0; i< 10 ; i++)
    {
        min = whichMin(min,arr[i]);
    }
    return min;
}

long whichMax(long a, long b)
{
    if (a > b)
    {
        return a;
    }
    else
        return b;
}

long whichMin(long a, long b)
{
    if (a < b)
    {
        return a;
    }
    else
        return b;
}

int main()
{
    run();
    return 0;
}