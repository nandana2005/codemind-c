#include<stdio.h>
int main()
{
    int a,b,i,hcf=1,c;
    scanf("%d%d",&a,&b);
    c=a/b;
    for(i=1;i<=b;i++)
    {
        if(a%i==0&&b%i==0)
        hcf=i;
    }
    printf("%d",hcf);
}