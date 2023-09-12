/******************************************************************************

CHALLENGE:
In C language, create a program that requests ten random integer numbers 
from the user. The program should then print these numbers in descending order.

*******************************************************************************/
#include <stdio.h>

void readValues(int values[], int size){
    printf("Please, type RANDOM NUMBERS\n");
    for(int i = 0; i < size; i++){
        printf("Type the 'INDEX %i' value: ", i);
        scanf("%i", &values[i]);
    }
}

void printDescending(int values[], int size){
    int temp;
    int swapped;

    for(int i = 0; i < size; i++){
        swapped = 0; 
        for (int j = 0; j < size - i - 1; j++) {
            if (values[j] < values[j + 1]) {
                temp = values[j];
                values[j] = values[j + 1];
                values[j + 1] = temp;
                swapped = 1; 
            }
        }

        if (swapped == 0) {
            break;
        }
    }
    
    printf("\n=== PRINTING ARRAY IN DESCENDING ORDER ===\n");
    printf("numbers = {");
    for(int i = 0; i < size; i++){
        if(i<size-1){
            printf("%i, ", values[i]);
        } else {
            printf("%i}", values[i]);
        }
       
    }
}

int main(){
    int numbers[10];
    int arrayLength = sizeof(numbers) / sizeof(numbers[0]);
    
    readValues(numbers, arrayLength);
    
    printDescending(numbers, arrayLength);
    
    return 0;
}
