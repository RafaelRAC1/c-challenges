/******************************************************************************

CHALLENGE:
Read two vector-type matrices, one with 20 elements (A) 
and the other with 30 elements (B). 
Build a matrix C, which is the combination of the two other matrices. 
Thus, C should have the capacity to store 50 elements. Present matrix C.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int arrayA[20];
     int arrayALength = sizeof(arrayA) / sizeof(arrayA[0]);
     
    int arrayB[30];
    int arrayBLength = sizeof(arrayB) / sizeof(arrayB[0]);
    
    int arrayC[arrayALength+arrayBLength];
    int arrayCLength = sizeof(arrayC) / sizeof(arrayC[0]);
    
    printf("=== ARRAY A ===\n");
    for(int i = 0; i < arrayALength; i++){
        printf("Please, type the 'INDEX %i' value: ", i);
        scanf("%i", &arrayA[i]);
        arrayC[i] = arrayA[i];
    }
    
    printf("\n=== ARRAY B ===\n");
    for(int i = 0; i < arrayBLength; i++){
        printf("Please, type the 'INDEX %i' value: ", i);
        scanf("%i", &arrayB[i]);
        arrayC[i+arrayALength] = arrayB[i];
    }
    
    printf("\n=== PRINTING ARRAY C ===\n");
    for(int i = 0; i < arrayCLength; i++){
        if(i != arrayCLength-1){
           printf("%i, ", arrayC[i]);
        } else {
           printf("%i", arrayC[i]);
        }
    }
    return 0;
}