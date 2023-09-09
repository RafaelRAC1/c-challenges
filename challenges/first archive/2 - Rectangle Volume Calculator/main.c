/******************************************************************************

CHALLENGE:
Create a program that calculates and displays the volume of a rectangular box 
using the formula VOLUME ← LENGTH * WIDTH * HEIGHT.


*******************************************************************************/
#include <stdio.h>

int main()
{
    int volume, width, height, length;
    
    printf("Please type the width of the box in cm: ");
    scanf("%i", &width);
    
    printf("Please type the height of the box in cm: ");
    scanf("%i", &height);
    
    printf("Please type the length of the box in cm: ");
    scanf("%i", &length);
    
    volume = width * height * length;
    
    printf("The box volume is equal to %d cm3", volume);
}
