//Largest Interger 

#include <stdio.h>
#include <stdlib.h>

void main()
{
    //For Two Intergers
    int n1,n2;
    printf("Enter the two intergers\n");
    scanf("%d,%d",&n1,&n2);
    if(n1>0 && n2>0)
    {
        if(n1>n2)
        printf("%d is larger\n",n1);
        else
        printf("%d is larger\n",n2);
    }
    else
    {
        printf("Invalid number in input\n");
        exit(0);
    }
    //For Three Intergers 
    int a,b,c;
    printf("Enter the three numbers\n");
    scanf("%d,%d,%d",&a,&b,&c);
    if(a>0 && b>0 && c>0)
    {
        if(a>b && a>c)
        printf("%d is the larger number\n",a);
        else if(b>a && b>c)
        printf("%d is the larger number\n",b);
        else
        printf("%d is the larger number\n",c);
    }
    else
    {
        printf("Invaid number in input\n");
    }
}