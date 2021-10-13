/*Word count: Counting words in a document is a useful operation. Write a C code to 
implement the same. The output must provide the number of words in a given string (i/p).*/

#include <stdio.h>
#include <string.h>

void main()
{
    int i,l,count=1;
    char sen[100]; 
    
    printf("Enter the statement\n");
    gets(sen);
    
    l = strlen(sen);
    
    for(i=0;i<l;i++)
    {
        if(sen[i]==' ')
        count++;
    }
    printf("The number of words is %d\n",count);
}