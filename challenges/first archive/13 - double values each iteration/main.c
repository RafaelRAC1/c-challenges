/******************************************************************************

CHALLENGE:
Create a program that calculates and, in the end, presents the total number 
of wheat grains that can be obtained on a chessboard, following the following 
rule: place one grain of wheat on the first square and, in the subsequent 
squares, double the grains from the previous square. In other words, on 
the first square, place 1 grain, on the second square, place 2 grains 
(totaling 3 grains at this point), on the third square, place 4 grains 
(totaling 7 grains at this point), on the fourth square, place 8 grains 
(totaling 15 grains at this point), and so on until reaching 
the sixty-third (64th) square. Use real variables as accumulators.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float total = 0.00;
    long i = 1L, current = 1L;
    
    do{
        printf("%liº SQUARE: %li GRAINS\n", i, current);
        total += current;
        current *= 2;
        i++;
    } while(i<=63);
    
    printf("Total is: %.2f", total);
    return 0;
}