//CET Rank cut-off 

#include <stdio.h>
void main()
{
    int rank;
    printf("Enter your rank\n");
    scanf("%d",&rank);
    if(rank <= 3250)
    printf("you will get CSE ,ISE , E&C , MEC\n");
    else if(rank>3250 && rank<=6505)
    printf("You will get ISE , E&C , MEC\n");
    else if(rank>6505 && rank<=12012)
    printf("You will get E&C and MEC\n");
    else if(rank>=12012 && rank<22340)
    printf("You will get MEC\n");
    else
    printf("Admission in RNSIT not possible\n");

}