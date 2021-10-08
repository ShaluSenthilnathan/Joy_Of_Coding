//Voting Eligibility Using Ternery Operators And Conditional Statements

#include <stdio.h>
#include <string.h>
void main()
{
    //Ternery Operators
    int age1,age2,res;
    printf("Enter the age\n");
    scanf("%d",&age1);
    res = ((age1>=18)?1:0);
    if (res==1)
    {
        printf("Eligible to Vote\n");
    }
    else
    {
        printf("Not Eligible to vote\n");
    }
    //Conditional Statements 
    printf("Enter the age\n");
    scanf("%d",&age2);
    if(age2>=18)
    printf("Eligible to vote\n");
    else
    printf("Not eligible to vote\n");   
}