/**
 * C program to search element in array
 */

#include <stdio.h>

#define MAX_SIZE 100  // Maximum array size

int main()
{
    int arr[MAX_SIZE];
    int size, i, toSearch, found;

    /* Input size of array */
    
    scanf("%d", &size);

    /* Input elements of array */
    
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    
    scanf("%d", &toSearch);

    /* Assume that element does not exists in array */
    found = 0; 
    
    for(i=0; i<size; i++)
    {
        /* 
         * If element is found in array then raise found flag
         * and terminate from loop.
         */
        if(arr[i] == toSearch)
        {
            found = 1;
            break;
        }
    }

    /*
     * If element is not found in array
     */
    if(found == 1)
    {
        printf("True", toSearch, i + 1);
    }
    else
    {
        printf("False", toSearch);
    }

    return 0;
}