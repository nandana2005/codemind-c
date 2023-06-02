#include <stdio.h>
int main()
{
     char ch;
     scanf("%c",&ch);
     if(ch=='r' || ch=='R')
     {
          printf("Red");
     }
     else if(ch=='g' || ch=='G')
     {
          printf("Green");
     }
     else if(ch=='b' || ch=='B')
     {
          printf("Blue");
     }
     else if(ch=='y'|| ch=='Y')
     {
          printf("Yellow");
     }
     else {
         printf("-1");
     }
     return 0;
}