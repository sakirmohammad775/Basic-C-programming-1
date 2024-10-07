#include <stdio.h>
int main()
{
    char ch;
    scanf("%c", &ch);

    if (ch >= '0' && ch <= '9')
    {
        printf("IS DIGIT\n");
    }
    else
    {
        printf("ALPHA\n");

        if (ch >= 'A' && ch <= 'Z')
        {
            printf("IS CAPITAL\n");
        }
        else
        {
            printf("IS SMALL\n");
        }
    }
    return 0;
}

//first of all check digit or Alpha
// for Alpha check  Capital or Small
// Ascii '0'=48,'1'=49..... '9'=57
