/*Digit extraction: Given an integer Say 45678, write a program to extract individual digits and 
display them along with number of digits (count). Enhance the program to obtain the reverse 
of the given number. (Usage of while loop is recommended).*/

#include <stdio.h>

void main()
{
    int num,a,rem,rev=0,count=0;
    scanf("%d",&num);
    while(num!=0)
    {
        rem = num%10;
        rev = (rev*10)+rem;
        num = num/10;
    }
    printf("The reverse of the number is %d\n",rev);
    
    printf("The digits are:\n");
    while(rev!=0)
    {
        count++;
        a = rev%10;
        printf("%d\t",a);
        rev = rev/10;
    }
    
    printf("\nThe number of the digits is %d\n",count);
    
}