#include<stdio.h>
int main(){
     int n;
    scanf("%d", &n);  // Taking input for how many multiplication tables you want
    for (int j = 1; j <= n; j++)  // Outer loop for each number
    {
        for (int i = 1; i <= 10; i++)  // Inner loop for multiplying from 1 to 10
        {
            printf("%d x %2d = %2d\n", j, i, j * i);  // Printing the multiplication table
        }
        printf("\n");  // Adding extra line between tables
    }

    return 0;
}