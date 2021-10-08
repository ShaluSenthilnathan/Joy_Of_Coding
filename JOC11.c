//Paper Mill Order

#include <stdio.h>
void main()
{
    int n;
    float cost,c;
    printf("Enter the number of books\n");
    scanf("%d", &n);
    if (n < 10000)
    {
        printf("No discount!!!\n");
        cost = n*10;
        printf("The total cost is %f\n", cost);
    }
    else if (n > 10000 && n < 15000)
    {
        c = (n*10);
        cost = c - (0.1*c);
        printf("Hey!! U got 10 percent discount\n");
        printf("The total cost is %f\n", cost);
    }
    else if (n > 15000 && n < 20000)
    {
        c = (n * 10);
        cost = c - (0.2*c);
        printf("Hey!! U got 20 percent discount\n");
        printf("The total cost is %f\n", cost);
    }
}