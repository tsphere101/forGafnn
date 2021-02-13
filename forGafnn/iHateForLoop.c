#include <stdio.h>

void printTheThingOut(int num)
{
    int input = num;
    for(int row = input; row > 0; row--)
    {
        for(int k = 0 ; k < row; k++)
        {
            // Print ..
            printf(".");
        }
        for(int j = input; j > row; j--)
        {
            printf("/");
        }
        printf("\n");
    }
}

int main()
{
    printf("Enter size of rectangle : ");
    int input;
    scanf(" %d", &input);
    if(input <= 0)
    {
        printf("This is impossiple!\n");
    }

    printTheThingOut(input);

    return 0;
}