/*
No twins pls !!! : Mr. Chitti, a robot is assigned a job of reporting to his boss 
Dr. Vaseegaran about the existence of twins in a group. Chitti’s job is just to 
report whether the group is distinct or not. Even if one duplicate is present then 
the group is not unique. Help Mr. Chitti to report.
2,6,10,14,18,10,3,7
*/

#include <stdio.h>
void main()
{
    int A[10],i,j,n,count=1;
    
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    
    printf("Enter the elements\n");
    for(i=0;i<n;i++)
    scanf("%d",&A[i]);
    
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if (A[i] == A[j])
            {
                count++;
            }
        }
    }
    if(count==1)
    printf("Array elements are unique\n");
    else
    printf("Array elements are not unique\n");

}
