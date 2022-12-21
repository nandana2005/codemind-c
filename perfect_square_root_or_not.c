#include<stdio.h>
int main()
{
    int i, number, flag=0;
    scanf("%d", &number);
    if(number == 1 || number == 0){
        printf("%d is a Perfect Square.", number);
        flag=1;
    }

    for(i = 2; i <= number/2; i++)
    {
        if(number == i*i)
        {
            printf("True");
            flag=1;
            break;
        }
    }
    if(flag == 0)
        printf("False");
}        
        