/******************************************************************************

CHALLENGE:
Develop a program that presents the conversion value from a value read 
in dollars to Brazilian currency (real). 
The program should request the dollar exchange rate and the amount 
of dollars available with the user, so that the value in Brazilian currency 
can be displayed.


*******************************************************************************/
#include <stdio.h>

int main()
{
    float exchangeRate, dollarsAmount, realAmount;
    
    printf("Please, type the dollar exchange rate (1 USD to BRL): ");
    scanf("%f", &exchangeRate);
    
    printf("Please, type the amount of dollars available with you: ");
    scanf("%f", &dollarsAmount);
    
    realAmount = dollarsAmount * exchangeRate;
    
    printf("The value in Brazilian currency is: BRL %.2f", realAmount);
    return 0;
}
