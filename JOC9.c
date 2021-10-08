//Simple Calculator

#include <stdio.h>
#include <stdlib.h>

void main()
{
    float n1, n2, sum, difference, product, quotient;
    char op;
    printf("Enter the expression(n1+n2):\n");
    scanf("%f%c%f", &n1, &op, &n2);
    switch (op)
    {
    case '+':
        sum = n1 + n2;
        printf("Sum=%f\n", sum);
        break;

    case '-':
        difference = n1 - n2;
        printf("Difference=%f\n", difference);
        break;

    case '/':
        if (n2 == 0)
        {
            printf("The denominator cannot be zero\n");
            exit(0);
        }
        else
        {
            quotient = n1 / n2;
            printf("Quotient = %f\n", quotient);
            break;
        }

    case '*':
        product = n1 * n2;
        printf("Product = %f\n", product);
        break;
    }
}