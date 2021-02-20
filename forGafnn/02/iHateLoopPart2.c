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
    int i = 0;
    for(i = 0 ; i < num/2 ; i++)
    {
        printf("%d",i);
        /* in line print*/
        for(int k = 0 ; k <= i ; k++)
        {
            printf("*");
        }

        printf("\n");
    }

    /*Second Half */
    for(i = (num/2)+num%2 ; i>0; i--) 
    {
        printf("%d",i);
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