/*
2 6 10 14 18 3 7 11 15 19
Let me join. Consider the following image 
Number 22 wants to see itself between 14 and 18. Be aware of the limitations of the array and 
place 22 in its desired position.
Expected output is 2 6 10 14 22 18 3 7 11 15 19
*/

#include <stdio.h>
void main()
{
    int A[20],i,n,num,pos;
    
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    
    printf("Enter the elements\n");
    for(i=0;i<n;i++)
    scanf("%d",&A[i]);
    
    printf("The array u entered is\n");
    for(i=0;i<n;i++)
    printf("%d\t",A[i]);
    
    printf("\nEnter the element you want to add\n");
    scanf("%d",&num);
    
    printf("Enter the position at which u want to add\n"); //Position is NOT the index post...its index+1
    scanf("%d",&pos);
    
    for(i=n;i>=(pos-1);i--)
    A[i+1] = A[i];
    
    A[pos-1] = num;
    
    for(i=0;i<n+1;i++)
    {
        printf("%d\t",A[i]);
    }     
}