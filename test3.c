#include <stdio.h>
int main()
{
    int b, c;
    short int a = 7;
    char ch;

    scanf("%hd %d %d", &a, &b, &c);
    scanf("\n%c",&ch);
    printf("a=%d b=%d c=%d ,ch=%c",a,b,c,ch);
    return 0;
}