/******************************************************************************

CHALLENGE:
Using the C language, create a function that returns the sum of the square 
of one number with the summation of two other numbers. 
Note that the function should receive three numerical values 
and return a^2 + (b + c).

*******************************************************************************/
#include <stdio.h>
int calculate(int a, int b, int c){
    return (a * a) + (b + c);
}

int main()
{
    int a, b, c, equation;
    
    printf("Type 'A' value: ");
    scanf("%i", &a);
    
    printf("Type 'B' value: ");
    scanf("%i", &b);
    
    printf("Type 'C' value: ");
    scanf("%i", &c);
    
    equation = calculate(a, b, c);
    
    printf("\nThe result is: %i", equation);
    return 0;
}
