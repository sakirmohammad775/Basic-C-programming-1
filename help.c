#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c){
        printf("%d is the largest number",a);
    }
    else if(b>c && c>a){
        printf("%d is the largest number",b);
    }
    else{
        printf("%d is the largest number",c);
    }
    return 0;
}