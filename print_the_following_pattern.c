#include<stdio.h>
int main()
{
    int n,i,j,k;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(k=n-i;k>0;k--)
        {
            printf(" ");
        }
        for(j=1;j<=n;j++)
        {
            if(i==1||j==1||i==n||j==n)
            printf("*");
            else
            printf(" ");
        }printf("
");
    }
}