#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<=10;i++){
        printf("%d x %2d = %2d\n",n ,i,n*i); //2d  use for formatting
    }

    // if i want 10 number multiplication with provided n
    // int n;
    // scanf("%d", &n);
    // for (int j = 1; j <= n; j++)
    // {
    //     for (int i = 1; i <= 10; i++)
    //     {
    //         printf("%d x %2d = %2d\n", j, i, j * i);
    //     }
    //     printf("\n \n");
    // }
    return 0;
}
