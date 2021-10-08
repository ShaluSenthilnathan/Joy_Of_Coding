//Determining Largest Of Two Numbers Using Ternary Operators 

#include <stdio.h>
void main()
{
    int a,b,c,d;
    printf("Enter the two numbers\n");
    scanf("%d,%d",&a,&b);
    c = ((a>b)?a:b);
    printf("The larger number is %d\n",c);

    //Determining Largest Among 3 Numbers Using Ternary Operators

    printf("Enter three numbers\n");
    scanf("%d,%d,%d",&a,&b,&c);
    d = (((a>b)&&(a>c))?a:((b>c)?b:c));
    printf("The larger number is %d\n",d);
}


     


