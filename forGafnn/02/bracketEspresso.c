#include <stdio.h>
void run();
long countLength(char *);
long countBrackets(char *);

void run()
{
    printf(" *** Count number of brackets ***\n");
    printf("Enter expression : ");
    char str_[1023];
    gets(str_);

    printf("expression : %s\n",str_);
    printf("length : %d\n", countLength(str_));
    if(countBrackets(str_) == -1)
    {
        printf("%s ===> bracket doesn't match.", str_);
        return;
    }
    printf("There are %d brackets in %s", countBrackets(str_),str_);

}

long countLength(char *str)
{
    long length = 0;

    while (str[length] != '\0')
    {
        length++;
    }

    return length;
}

long countBrackets(char *str)
{
    long open_bckt = 0;
    long close_bckt = 0;
    for (int i = 0; str[i] != 0; i++)
    {
        if (str[i] == '(')
            open_bckt++;
        if (str[i] == ')')
            close_bckt++;
    }

    return (open_bckt == close_bckt) ? open_bckt : -1;
}

int main()
{
    run();
    return 0;
}