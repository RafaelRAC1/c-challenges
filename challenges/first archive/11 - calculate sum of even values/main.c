/******************************************************************************

CHALLENGE:
Create a program that presents, in the end, 
the sum of the even values within the range from 1 to 500.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int total = 0;
    
    printf("This program calculates and displays \nthe sum of even numbers within the range from 1 to 500\n");
    
    
    for(int i = 1; i <= 500; i++){
        if(i%2 == 0){
            total += i;
        }
    }
    
    printf("\nTHE TOTAL IS %i", total);
    return 0;
}
