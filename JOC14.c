/*Increased sum of digits: Write a program that accepts an integer, say 1234 and returns the 
sum as increased digits sum. i.e. (1+1)+(2+1)+(3+1)+(4+1)=14. 
Note. add 1 to each digit and compute the sum
Test case 1 
input 
3456
output
22
Test case 2
input
0
output
1
Test case 3
input 
111
output
6
*/


#include <stdio.h>

void main()
{
    int num,a,b,sum=0;
    scanf("%d",&num);
    if(num == 0)
    sum = 1;
    else
    {
        while(num!=0)
        {
            a = num%10;
            sum = sum + (a+1);
            num = num/10;
        }
    }
    printf("%d\n",sum);
}
