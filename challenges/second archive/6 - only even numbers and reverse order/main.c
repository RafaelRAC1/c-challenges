/******************************************************************************

CHALLENGE:
Create a program that fills the first five positions of a numeric array with 
even numbers. The program should print the values of the array from the last 
position to the first.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
    int numbers[5], randomNumber = 0;
    int arraySize = sizeof(numbers) / sizeof(numbers[0]);
    srand(time(NULL));
    
    for(int i = 0; i < arraySize; i++){
        numbers[i] = rand() % 50 * 2 + 2;
    }
    
    
    printf("=== PRINTING ARRAY ===\n");
    printf("numbers = {");
    for(int i = arraySize-1; i >= 0; i--){
        if(i>0){
            printf("%i, ", numbers[i]);
        } else {
            printf("%i}", numbers[i]);
        }
    }
    return 0;
}
