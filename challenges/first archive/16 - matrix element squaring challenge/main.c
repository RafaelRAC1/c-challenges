/******************************************************************************

CHALLENGE:
Read 15 elements of a vector-type matrix. Build a matrix B of the same type, 
following the following formation rule: 'Every element of B should be the 
square of the corresponding element of A.' Present matrices A and B

*******************************************************************************/
#include <stdio.h>

int main()
{
    int arrayA[15], arrayB[15];
    int arrayLength = sizeof(arrayA) / sizeof(arrayA[0]);
    
    for(int i = 0; i < arrayLength; i++){
        printf("Please, type the 'INDEX %i' VALUE: ", i);
        scanf("%i", &arrayA[i]);
        arrayB[i] = arrayA[i] * arrayA[i];
    }
    
    for(int i = 0; i < arrayLength; i++){
        printf("\narrayA[%i] = {", i);
        printf(" %i", arrayA[i]);
        printf(" }");
        
        printf("\narrayB[%i] = {", i);
        printf(" %i", arrayB[i]);
        printf(" }\n");
    }
    

    return 0;
}