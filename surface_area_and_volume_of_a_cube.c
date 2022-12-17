#include<stdio.h>
int main()
{
    int a,sf,v;
    scanf("%d%d%d",&a,&sf,&v);
    sf=6*(a*a);
    v=a*a*a;
    printf("Surface area = %d",sf);
    printf(" and ");
    printf("Volume = %d",v);
}