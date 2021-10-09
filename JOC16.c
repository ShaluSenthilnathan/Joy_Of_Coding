/*
Caesar Cipher: Mr. Pay needs cash from ATM, he seeks help from his “BEST” friend and hands 
over his debit card to him. Mr. Bob later realizes that the ATM PIN is not available with him. 
He calls up Mr. Pay and ask for PIN. Now Mr. Pay gives away the codeword say 3578. Bob on 
the other end writes it down and inserts the card and types in 4689 (which is actual PIN!!!!)
and withdraws cash. (This is also called Caesar Cipher).
Write a C program that accepts an integer (codeword) and generates the PIN. Do not use 
arrays, strings. Accomplish the task using basic operators and looping constructs 
Test case 1
input 
8245
output
9356
Test case 2
input 
4184
output
5295
Test case 2
input 
2995
output
3006
*/


#include <stdio.h>

void main()
{
    int num1,rem,num2=0,a,b;
    scanf("%d",&num1);
    while(num1!=0)
    {
        rem = num1%10;
        num2 = (num2*10)+rem;
        num1 = num1/10;
    }
    
    while(num2!=0)
    {
        a = num2%10;
        if (a==9)
        b = 0;
        else 
        b = a+1;
        
        printf("%d\t",b);
        num2 = num2/10;
    }
}

//V V V IMP - Its important to reverse the number before printing the indvidual digits coz (num % 10) prints from the last digit 