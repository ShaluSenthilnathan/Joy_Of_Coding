/*Read and Print: Consider following three situations.
Mr. Int work on daily wages. From Monday to Saturday, he earns ₹ 560, ₹ 660, ₹ 590, ₹ 760,
₹480, ₹960 respectively 
Mr. Float work on daily wages. From Monday to Saturday, he earns commission of ₹ 97.50,
₹66.0, ₹ 79.25, ₹ 76.55, ₹98.45, ₹96.40 respectively 
Mr. Char remembers the weekdays as M, T W T F S 
Write a C code to help all of them to enter and retrieve these details (hint declare, read and 
print array). Print them in reverse order as well.*/

#include <stdio.h>
int main()
{
    int i,Sal_Int[6];
    char W[6] = {'M','T','W','T','F','S'};
    float Sal_Float[6];
    printf("Enter the daily salaries of Mr Int\n");
    for(i=0;i<6;i++)
    {
        scanf("%d",&Sal_Int[i]);
    }
    printf("Enter the daily salaries of Mr Float\n");
    for(i=0;i<6;i++)
    {
        scanf("%f",&Sal_Float[i]);
    }
    
    printf("The salaries of Mr Int are\n");
    for(i=0;i<6;i++)
    printf("%c\t%d\n",W[i],Sal_Int[i]);
    printf("The salaries of Mr Float are\n");
    for(i=0;i<6;i++)
    printf("%c\t%f\n",W[i],Sal_Float[i]);
    
    //Printing the salaries in reverse order
    printf("The salaries of int and float in reverse order are\n");
    for(i=5;i>=0;i--)
    printf("%c\t%d\t%f\n",W[i],Sal_Int[i],Sal_Float[i]);
    return 0;
    
}
