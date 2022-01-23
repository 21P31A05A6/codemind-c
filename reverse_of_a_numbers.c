#include<stdio.h>
int main()
{
    int num,sum=0,r;
    scanf("%d",&num);
    while(num>0){
        r=num%10;
        sum=sum*10+r;
        num=num/10;
    }
    printf("%d",sum);
}