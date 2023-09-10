/******************************************************************************

CHALLENGE:
Create a program that calculates and presents the value of the conversion 
to dollars for a value entered in Brazilian reais. 
The program should request the dollar exchange rate 
and the amount of reais available from the user, in order to display 
the amount in US currency.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float exchangeRate, reaisAmount, dollarsAmount;
    
    printf("Type the real to dolar exchange rate (1 REAL to DOLLARs: ");
    scanf("%f", &exchangeRate);
    
    printf("Type the Reais amount: ");
    scanf("%f", &reaisAmount);
    
    dollarsAmount = exchangeRate * reaisAmount;
    
    printf("The amount in US currency is %.2f USD", dollarsAmount);
    return 0;
}
