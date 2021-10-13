/*Abbrevation: Consider a string “R N S Institute of Technology”. People are fond of 
abbreviations. So the output expected for above string is RNSIT. Write a code to implement
the same. Make your code generic so that it can abbreviate any given string say “British 
Broadcasting Corporation” to BBC. */

#include <stdio.h>
#include <string.h>

int main()
{
    char sen[100];
    int l,i;
    printf("Enter the string\n");
    gets(sen);
    
    l = strlen(sen);
    
    printf("%c",sen[0]);
    for(i=0;i<l;i++)
    {
        if(sen[i]==' ')
        {
            printf("%c",sen[i+1]);
        }
    }
    
    return 0;
}
