//Left And Right Shift Operator 

#include <stdio.h>
int main()
{
    int num = 22,a;
    //Left Shift Operator
    printf("Input the number of times you want to left shift\n");
    scanf("%d",&a);
    printf("22>>1 = %d\n",num>>a);
    //Right Shift Operator 
    printf("Input the number of times you want to right shift\n");
    scanf("%d",&a);
    printf("22<<1 = %d\n",num<<a);
}