/**
 * C program to calculate profit or loss
 */

#include <stdio.h>

int main()
{
    int cp,sp, amt; 
    
    scanf("%d", &cp);
    scanf("%d", &sp);
    
    if(sp > cp)
    {
        /* Calculate Profit */
        amt = sp - cp;
        printf("Profit", amt);
    }
    else if(cp > sp)
    {
        /* Calculate Loss */
        amt = cp - sp;
        printf("Loss", amt);
    }
    else
    {
        /* Neither profit nor loss */
        printf("No profit and No loss");
    }

    return 0;
}