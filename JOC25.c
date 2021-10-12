/*Fequency. After seeing the efficiency of Chitti, Dr. Vaseegaran assigns another job to him. The 
new responsibility is to count the frequency of numbers present in a group of numbers. The 
answer should be tabulated. Consider the following example. The expected output for the given 
set if numbers is 2,6,10,14,18,10,3,7,11,15,19,3,7,10,14
2 : 1
6: 1
10: 3
14: 2
18: 1
and so on …
*/
#include <stdio.h>

int main()
{
    int arr[100], freq[100];
    int size, i, j, count;

   
    printf("Enter size of array ");
    scanf("%d", &size);

    printf("Enter elements in array ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);

        freq[i] = -1;
    }


    for(i=0; i<size; i++)
    {
        count = 1;
        for(j=i+1; j<size; j++)
        {
            if(arr[i]==arr[j])
            {
                count++;

                freq[j] = 0;
            }
        }

        if(freq[i] != 0)
        {
            freq[i] = count;
        }
    }

    
    printf("Frequency of all elements of array are  \n");
    for(i=0; i<size; i++)
    {
        if(freq[i] != 0)
        {
            printf("%d :%d\n", arr[i], freq[i]);
        }
    }

    return 0;
}