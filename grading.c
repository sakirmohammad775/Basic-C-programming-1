#include <stdio.h>
int main()
{
    int marks;
    scanf("%d", &marks);
    if (marks >= 80 && marks<=100)
    {
        printf("Grade A+");
    }
    else if (marks >= 70 && marks < 80)
    {
        printf("Grade A");
    }
    else if (marks >= 60 && marks < 70)
    {
        printf("Grade B");
    }
    else if( marks >= 0 && marks < 60){
        printf("Grade Fail");
    }
    else
    {
        printf("Invalid Number");
    }
}