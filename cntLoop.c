#include <stdio.h>
int main()
{
    int cnt = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int i = 0; i < 3; i++)
        {
            for (int i = 0; i < 2; i++)
            {
                cnt ++;
            }
        }
    }
    printf("interaction time:");
    printf("%d",cnt);
    return 0;
}