/*Read and Print : Explore all possible ways of reading and printing 
a character
a string (without spaces)
a string (with spaces – sentences)
Write a note against each statements that you explore 
// Hint: use scanf ( ), printf ( ), gets ( ), puts ( ), getch ( ), putch ( ), getche ( )*/


#include <stdio.h>
int main()
{
    char ch, s1[100],c,chara,s2[100]="RNSIT";
    printf("Different ways of reading character\n");
    //For Reading Characters 
    printf("Enter any character:It will read using scanf\n");
    scanf("%c",&ch);
    printf("Enter any character: It will read using getch\n");
    c=getch();
    printf("Enter the character: It will read using getche\n");
    chara=getche();
    //For Printing Characters
    printf("\nDifferent ways of printing character\n");
    printf("Printing character using printf statement\n");
    printf("%c,%c,%c",ch,c,chara);
    printf("\nPrinting character using putchar\n");
    putchar(ch );
    putchar(c );
    putchar(chara );
    //For Reading Strings
    printf("\nDifferent ways of reading string\n");
    printf("Enter any string: It will read using scanf\n");
    scanf("%s",s1);
    //For Printing Strings
    printf("\nDifferent ways of printing string\n");
    printf("Printing string using printf statement\n");
    printf("%s %s",s1,s2);
    printf("\nPrinting string using puts\n");
    puts(s1);
    puts(s2);
    return 0;
}