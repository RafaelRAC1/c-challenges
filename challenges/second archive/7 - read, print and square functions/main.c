/******************************************************************************

CHALLENGE:

Create a C program with functions for reading a numeric array, 
printing the array, and printing the squares of the numbers in the array.

*******************************************************************************/
#include <stdio.h>

void scanArray(int values[], int size){
    printf("\n=== READING ARRAY ===\n");
    for(int i = 0; i < size; i++){
        printf("Please, type the 'INDEX %i' value: ", i);
        scanf("%i", &values[i]);
    }
    printf("\n");
}

void printArray(int values[], int size){
    printf("=== PRINTING ARRAY ===\n");
    printf("numbers = {");
    for(int i = 0; i < size; i++){
        if(i<size-1){
           printf("%i, ", values[i]);
        } else {
           printf("%i}", values[i]);
        }
        
    }
    printf("\n");
}

void printSquaresArray(int values[], int size){
    printf("\n=== PRINTING ARRAY SQUARES ===\n");
    printf("numberSquares = {");
    for(int i = 0; i < size; i++){
        if(i<size-1){
           printf("%i, ", values[i]*values[i]);
        } else {
           printf("%i}", values[i]*values[i]);
        }
        
    }
    printf("\n");
}

int main() {
    int size;
    
    printf("Please, type the array size: ");
    scanf("%i", &size);
    
    int numbers[size];
    
    scanArray(numbers, size);
    
    printArray(numbers, size);
    
    printSquaresArray(numbers, size);
    return 0;
}
