#include<stdio.h>
void main()
{
int number, remainder, sum = 0, j;
scanf("%d", &number);
for(j = 1; j < number; j++)  {
    remainder = number % j;
       if (remainder == 0)  {
                sum = sum + j;
                       }
      }
if (sum == number)
      printf("True");
else
      printf("False");
}
