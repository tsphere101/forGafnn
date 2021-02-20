#include <stdio.h>
void run();
void printTriagnle(long num);

void run()
{
    long input;
    printf("Enter : ");
    scanf("%ld", &input);
    printTriagnle(input);
}

void printTriagnle(long num)
{
    /*First Half*/
    for(int i = 0 ; i < num/2 ; i++)
    {
        /* in line print*/
        for(int k = 0 ; k <= i ; k++)
        {
            printf("*");
        }

        printf("\n");
    }

    /*Second Half */
    for(int i = (num/2) +1; i>0; i--) 
    {
        /* in line print */
        for(int k = 1; k <= i ; k++)
        {
            printf("*");
        }

        printf("\n");
    }

}



int main ()
{
    run();
    return 0;
}