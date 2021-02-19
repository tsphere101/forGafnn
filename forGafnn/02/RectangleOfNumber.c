#include <stdio.h>
void run();
void printRectangle(int);
int checkRange(int);

/**
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 */

void run()
{
    double temp;
    printf("Enter a number (1-16) : ");
    scanf("%lf", &temp);
    temp = (int)temp;

    if (checkRange(temp))
    {
        printRectangle(temp);
    }
    else printf("Out of range ! ! !");


}

void printRectangle(int num)
{
    /*First row*/
    for (int i = num; i > 0; i--)
    {
        printf("%X", i);
    }
    printf("\n");
    /* End First row */

    /* Middle */
    for (int i = 0; i < num-2; i++)
    {
        /* In line */
        for (int i = num; i > 0;i--) 
        {
            if (i == num || i == 1)
            {
                printf("%X", i);
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    /* end middle chunck */

    /* Last row
    just like first row.
    */
    
    for (int i = num; i > 0; i--)
    {
        printf("%X", i);
    }


}

int checkRange(int value)
{
    const int RANGE_BOTTOM = 1;
    const int RANGE_TOP = 16;
    if (value <= RANGE_TOP && value >= RANGE_BOTTOM)
    {
        return 1;
    }
    else
        return 0;
}

int main()
{
    run();
    return 0;
}