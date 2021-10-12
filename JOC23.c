/*
2 6 10 14 18 3 7 11 15 19
I am not happy; I want to leave: Consider following situations.
Now, number 3 isn’t happy to be there. Help 3 to leave the group.
Expected output 2 6 10 14 18 7 11 15 19
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int i,n,pos;
    int A[10] = {2,6,10,14,18,3,7,11,15,19};
    n = 10;
    
    printf("Enter the position of the element you want to delete\n");
    scanf("%d",&pos);
    
    if (pos>=n)
    {
        printf("Deletion not possible\n");
        exit(0);
    }
    
    else
    {
        for(i=pos-1;i<n-1;i++)
        A[i] = A[i+1];

        printf("The array after deletion is\n");
    
        for(i=0;i<n-1;i++)
        printf("%d\t",A[i]);
    
        return 0;
    }

}