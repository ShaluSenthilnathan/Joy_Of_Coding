/*
ZERO: Mr. HERO, doesn’t like “zero”. If you give him a number (integer) say 4645, he will read 
it as 4, 6, 4, 5. If you ask him to read another number say 3007, he will read it as 3, 7. Write a 
program that simulates HERO’s behavior. (Hint: This program encourages the usage of 
continue statement)
Test case 1
input 
8245
output
8,2,4,5 (digits extracted)
Test case 2
input 
2035
output
2,3,5 (digits extracted zero omitted)
Test case 3
input 
1000
output
1
*/

#include <stdio.h>

void main()
{
    int num,rem,num1=0,i,a;
    scanf("%d",&num);
   
    while(num!=0)
    {
        rem = num%10;
        num1 = (num1 * 10)+rem;
        num = num/10;
    }
    while(num1!=0)
    {
        a = num1 % 10;
        if(a!=0)
        {
            printf("%d\t",a);
        }
        num1 = num1/10;
    }
}

