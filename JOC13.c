/* Sum of digits: Given an integer Say 34567, write a program that returns the sum of the digits, 
i.e., 26. Enhance the program further to get a single digit sum, i.e. 8. 
Test case 1
input 
15678
output 
the sum of digits is 27
(single digit sum is 9)
Test case 2
input 
75389
output 
the sum of digits is 32
(single digit sum is 5) */

#include <stdio.h>

void main()
{
    int num,a,b,sum=0,sum2=0;
    scanf("%d",&num);
    while(num!=0)
    {
        a = num%10;
        sum = sum + a;
        num = num/10;
    }
    if (sum<10)
    printf("The sum of the digits is %d\n",sum); 
    
    else
    {
        while(sum!=0)
        {
            b = sum%10;
            sum2 = sum2 + b;
            sum = sum/10;
        }
    
    printf("The sum of the digits is %d",sum2);
    }
}
