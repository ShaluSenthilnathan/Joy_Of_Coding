/*
Let’s guess: Mr. Int in the evening plays with his small kid Mr. Short Int. Mr. Int puts 10 folded 
chits having numbers 1 to 10 in front of his son. Mr. Short int jumbles those chits and ask his 
dad to pick a particular number say, 9. How many attempts will Mr. Int take? 
Enhance the program for a case where in there may be duplicate chits. in such cases Mr. Int 
should pick all chits having that particular number. 
*/

#include <stdio.h>

int main()
{
    int i,A[10],num,count=0,attempts;
    printf("Enter 10 numbers between 1 to 10\n");
    for(i=1;i<=10;i++)
    {
        scanf("%d",&A[i]);
    }
    printf("Enter the number to be picked\n");
    scanf("%d",&num);
    for(i=1;i<=10;i++)
    {
        if(num==A[i])
        {
            count++;
            attempts = i;
        }
    }
    printf("The number of duplicate chits is %d\n",count);
    printf("The number of attempts is %d\n",attempts);
    return 0 ;
}
