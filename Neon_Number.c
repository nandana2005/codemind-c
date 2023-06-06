#include<stdio.h>
int main()
{
    int num,digit,sum=0,square;
    scanf("%d",&num);
    square=num*num;
    while(square!=0)
    {
       digit=square%10;
       sum += digit;
       square = square/10;
    }
    if(sum==num)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}
    