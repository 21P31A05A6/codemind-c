#include<stdio.h>
int main()
{
    int n,i,j,starts=0,end,last,a[100][100];
    scanf("%d",&n);
    end=2*n-1;
    last=end;
    while(n>0)
    {
        for(i=starts;i<end;i++)
        {
            for(j=starts;j<end;j++)
            {
                if(i==starts||j==starts||i==end-1||j==end-1)
                a[i][j]=n;
                
            }
        }n--;
        starts++;
        end--;
    }for(i=0;i<last;i++)
    {
        for(j=0;j<last;j++)
        {
            printf("%d ",a[i][j]);
        }printf("
");
    }
}