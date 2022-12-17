#include<stdio.h>
int main()
{
    int a,b,x;
    scanf("%d%d",&a,&b);
    x=a+b;
    printf("Sum:%d
",x);
    x=a-b;
    printf("Difference:%d
",x);
    x=a*b;
    printf("Product:%d
",x);
    x=a/b;
   printf("Quotient:%d
",x);
    x=a%b;
    printf("Remainder:%d
",x);
}