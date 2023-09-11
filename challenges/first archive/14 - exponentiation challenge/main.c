/******************************************************************************

CHALLENGE:
Create a program that presents as a result the value of a power of any 
base raised to any exponent, that is, of BE, where B is the value of the 
base and E is the value of the exponent. 

*******************************************************************************/
#include <stdio.h>

int main()
{
    int b, e, localB;
    
    printf("Please, type the 'BASE': ");
    scanf("%i", &b);
    
    printf("Please, type the 'EXPONENT': ");
    scanf("%i", &e);
    
    localB = b;
    
    if(e != 0){
        for(int i = 1; i<e; i++){
           b*=localB;
        }
    } else {
        b = 1;
    }

    printf("The result is: %i", b);
    return 0;
}