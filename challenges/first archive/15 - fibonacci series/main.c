/******************************************************************************

CHALLENGE:
Write a program that displays the Fibonacci series up to the fifteenth term. 
The Fibonacci series is formed by the sequence: 
1, 1, 2, 3, 5, 8, 13, 21, 34, ..., etc. 
This series is characterized by the addition of a current term with 
its immediately preceding term to form the next value in the sequence. 
Therefore, starting with the numbers 1, 1, the next term is 1+1=2, 
the next is 1+2=3, the next is 2+3=5, the next 3+5=8, and so on.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int values[3] = {0, 1, 0}, i = 1;
    
    do{
        printf("%iº TERM: %i\n", i, values[0]+values[1]);
        values[2] = values[0];
        values[0] += values[1];
        values[1] = values[2];
        i++;
    }while(i<=15);
    return 0;
}