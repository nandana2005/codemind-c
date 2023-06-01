#include <stdio.h>
 
int happyNumber(int);
 
int main()
{
  int num = 82;
  scanf("%d", &num);
 
  int temp = num;
 
  while (temp != 1 && temp != 4)
  {
    temp = happyNumber(temp);
  }
 
  //check for 1    
  if (temp == 1)
    printf("True", num);
  else if (temp == 4)
    printf("False", num);
 
  return 0;
}
 
//user defined function
int happyNumber(int num)
{
  int rem = 0, sum = 0;
 
  //Calculation    
  while (num > 0)
  {
    rem = num % 10;
    sum = sum + (rem *rem);
    num /= 10;
  }
 
  return sum;
}