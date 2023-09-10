/******************************************************************************

CHALLENGE:
Create a program that reads an integer and displays a message indicating 
whether the number is even or odd."

*******************************************************************************/
#include <stdio.h>

int main()
{
    int value;
    
    printf("TYPE THE VALUE: ");
    scanf("%i", &value);
    
    if(value%2 == 0){
        printf("NUMBER IS EVEN");
    } else {
        printf("NUMBER IS ODD");
    }
    
    return 0;
}
