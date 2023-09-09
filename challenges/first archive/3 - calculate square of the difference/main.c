/******************************************************************************

CHALLENGE:
Read two integers (variables A and B) and print the result of the square 
of the difference between the first value and the second.


*******************************************************************************/
#include <stdio.h>

int main()
{
    int a, b, square;
    
    printf("Please, type variable 'A' value: ");
    scanf("%i", &a);
    
    printf("Please, type variable 'B' value: ");
    scanf("%i", &b);
    
    square = (a-b)*(a-b);
    
    printf("\nThe result is: %d", square);
    
    return 0;
}
