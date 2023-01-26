#include<stdio.h>
int main()
{
    int n,i,s=0,sq=0,d;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s=s+i;
        sq=i*i+sq;
        d=s*s-sq;
    }
    printf("%d",d);
}