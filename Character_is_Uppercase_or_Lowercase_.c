/**
 * C program to check whether a character is uppercase or lowercase 
 */

#include <stdio.h>

int main()
{
    char ch;
    scanf("%c", &ch);


    if(ch >= 'A' && ch <= 'Z')
    {
        printf("uppercase alphabet", ch);
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        printf("lowercase alphabet", ch);
    }
    else
    {
        printf("not an alphabet", ch);
    }

    return 0;
}