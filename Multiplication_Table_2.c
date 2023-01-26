#include<stdio.h>
int main()
{
    int x,n,i;
    scanf("%d%d",&x,&n);
    for(i=1;i<=n;i++)
    {
        printf("%d x %d = %d
",x,i,x*i);
    }
}