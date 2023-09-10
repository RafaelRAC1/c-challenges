/******************************************************************************

CHALLENGE:
Display the squares of the integers from 15 to 200.

*******************************************************************************/
#include <stdio.h>

int main()
{
    for(int i = 15; i <= 200; i++){
        printf("SQUARE OF %i IS %i\n", i, (i*i));
    }
    return 0;
}
