#include<stdio.h>
int main()
{
    int n,i,m,x;
    scanf("%d%d%d",&x,&n,&m);
    for(i=n;i<=m;i++)
    {
        printf("%d x %d = %d
",x,i,x*i);
    }
}