/*
Total Salary Use the data of Mr. Int and Mr. Float given above and write a program to help 
them to compute their weekly salary. Compute their average salary as well. Display their 
weekly salary and average salary separately for Mr. Int and Mr. float
*/

#include <stdio.h>

int main()
{
    int i;
    float sum_int=0, sum_float=0,as_int,as_float;
    int Sal_Int[6]={560, 660, 590, 760,480,960};
    float Sal_Float[6]={97.50,66.0,79.25,76.55,98.45,96.40};
    for(i=0;i<6;i++)
    {
        sum_int = sum_int + Sal_Int[i];
    }
    as_int = sum_int/6;
    printf("The weekly salary of Mr.Int is %f\n",sum_int);
    printf("The average salary of Mr.Int is %f\n",as_int);
    for(i=0;i<6;i++)
    {
        sum_float = sum_float + Sal_Float[i];
    }
    as_float = (sum_float/6);
    printf("The weekly salary of Mr.Float is %f\n",sum_float);
    printf("The average salary of Mr.Float is %f\n",as_float);
    return 0;
}
