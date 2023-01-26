#include<stdio.h>
int main()
{
    int a,x,i;
    scanf("%d%d",&a,&x);
    for(i=1;i<=x;i++)
    {
        if(i%2!=0)
        printf("%d x %d = %d
",a,i,a*i);
    }
}