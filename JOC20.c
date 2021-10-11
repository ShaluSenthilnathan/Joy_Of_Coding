/*Let’s party!!! Both Mr. Int and Mr. Float want to party on a day they get highest pay. 
Can you help them?*/

#include <stdio.h>
int main()
{
    int i,sal_int[50],maxi;
    char day1,day2;
    char W[6] = {'M','T','W','T','F','S'};
    float sal_float[50],maxf;
    printf("Enter the salaries of Mr Int\n");
    for(i=0;i<6;i++)
    scanf("%d",&sal_int[i]);
    printf("Enter the salaries of Mr Float\n");
    for(i=0;i<6;i++)
    scanf("%f",&sal_float[i]);
    
    maxi = sal_int[0]; 
    for(i=0;i<6;i++)
    {
        if(sal_int[i]>maxi)
        {
            maxi = sal_int[i];
            day1 = W[i];
        }
    }
    printf("Mr Int can party on %c\n",day1);
    
    maxf = sal_float[0];
    for(i=0;i<6;i++)
    {
        if(sal_float[i]>maxf)
        {
            maxf = sal_float[i];
            day2 = W[i];
        }
    }
    printf("Mr Float can party on %c\n",day2);
    
    return 0;   
}

