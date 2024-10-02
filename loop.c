#include<stdio.h>
int main()
{
    for(int i=1;i<5;i++){

    printf("before \n");
    printf("before inside the box %d",i);
    printf("%d\n",i);
    }
    int i=0;
    while (i<5)
    {
        /* code */
        printf("hello while\n");
        i++;
    }
    
    return 0;
}