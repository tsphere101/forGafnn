#include <stdio.h>

int main()
{


    int input;
    scanf(" %d", &input);
    if(input == 0)
    {
        printf("This is impossiple!\n")
    }

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

    return 0;
}