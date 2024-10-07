#include <stdio.h>
int main()
{
    int marks;
    scanf("%d", &marks);
    if (marks > 32 && marks <= 100)
    {
        if (marks >= 80 && marks <= 100)
        { if(marks>=90){
            printf("Excellent \n");
        }
            printf("Grade A+ \n");
        }
        else if (marks >= 70 && marks < 80)
        {
            printf("Grade A \n");
        }
        else if (marks >= 60 && marks < 70)
        {
            printf("Grade B \n");
        }
        printf("you have passed the exam");
    }

    else if (marks >= 0 && marks <= 32)
    {
        if (marks >= 0 && marks < 60)
        {
            printf("Grade Fail  \n");

        }
        printf("you have failed the exam");
    }
    else
    {
        printf("Invalid marks");
    }

    return 0;
}