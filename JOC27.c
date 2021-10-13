/*String handling . Consider a string “R N S Institute of Technology”. Write functions to perform 
following operations. Validate the output using Library functions
Find the length of the string 
Concatenate the string given above with another string “Bengaluru”.
Convert the string to all uppercases */

#include <stdio.h>
#include <string.h>

char len(char s1[],char s2[])
{
    int i=1;
    while(s1[i]!='\0')
    i++;
    printf("The length of the string1 is %d\n",i);
    i = 0;
    while(s2[i]!='\0')
    i++;
    printf("The length of the string2 is %d\n",i);
}

char uppercase(char s1[],char s2[])
{
    int l1,l2;
    l1 = strlen(s1);
    l2 = strlen(s2);
    int i;
    for(i=0;i<=l1;i++)
    {
        if(s1[i]>=97 && s1[i]<=122)
          s1[i]=s1[i]-32;
    }
    printf("The string 1 in uppercase is %s\n",s1);
    for(i=0;i<l2;i++)
    {
        if (s2[i]>=97 && s2[i]<=122)
          s2[i]=s2[i]-32;
    }
    printf("The string 2 in uppercase is %s\n",s2);
}

char equal(char s1[],char s2[])
{
    int i=0;
    while (s1[i]==s2[i])
    {
        if (s1[i]=='\0'||s2[i]=='\0')
        break;
        else
        i++;
    }
    if (i == strlen(s1))
    printf("The strings are equal\n");
    else
    printf("The strings are not equal\n");
}

char concat(char s1[],char s2[])
{
    int i,j;
    i = strlen(s1);
    for(j=0;s2[j]!='\0';i++,j++)
    {
        s1[i] = s2[j];
    }
    s1[i]!='\0';
    printf("The conactenated string is %s\n",s1);
}

void main()
{
    char s1[100],s2[100];
    printf("Enter the string 1\n");
    gets(s1);
    printf("Enter the string 2\n");
    gets(s2);
    len(s1,s2);
    uppercase(s1,s2);
    equal(s1,s2);
    concat(s1,s2); 
}