#include <stdio.h>
#include <stdlib.h>
int length(char *);
int main()
{
    // Get Input
    printf("Enter your name : ");
    char *plate = (char *)calloc(22, sizeof(char));
    fgets(plate, 22, stdin);
    *(plate + length(plate) - 1) = '\0';

    for (int i = 0; i < length(plate); i++)
    {
        printf("%c\n", *(plate + i));
    }
}

int length(char *plate)
{
    int result = 0;
    for (int i = 0; *(plate + i) != '\0'; i++)
    {
        result++;
    }
    return result;
}