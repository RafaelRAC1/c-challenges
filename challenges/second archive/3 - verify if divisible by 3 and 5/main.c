/******************************************************************************

CHALLENGE:
Create a program in C that reads an integer number and prints a message
telling the user if the inserted number is divisible by 5 and 3.

*******************************************************************************/
#include <stdio.h>

void verifyNumber(int number){
    if(number%5 == 0 && number%3 == 0){
        printf("\nThe number '%i' is divisible by 3 and 5!", number);
    } else {
        printf("\nThe number '%i' is NOT divisible by 3 and 5!", number);
    }
}

int main()
{
    int number;
    printf("Please, type the number: ");
    scanf("%i", &number);
    verifyNumber(number);
    
    return 0;
}
