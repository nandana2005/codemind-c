#include <stdio.h>
#include<math.h>
int main()
{
    int n, temp;
    int sum = 0, count = 0;
    scanf("%d", &n);
    temp = n;
    while(temp!=0){
        temp = temp/10;
        count = count + 1;
    }
    temp = n;
    while(count!=0){
        int last_digit = temp%10;
        temp = temp/10;
        sum = sum + pow(last_digit,count);
        count = count - 1;
    }
    if(sum == n)
    {
        printf("True");
    }else
    {
        printf("False");
    }
}
