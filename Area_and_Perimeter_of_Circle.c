#include<stdio.h>
int main()
{
    int r;
    scanf("%d",&r);
    float area,p;
    scanf("%f%f",&area,&p);
    area=3.14*(r*r);
    p=2*3.14*r;
    printf("%0.2f
",area);
    printf("%0.2f
",p);
}