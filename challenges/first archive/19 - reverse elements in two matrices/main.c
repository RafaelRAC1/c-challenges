/******************************************************************************

CHALLENGE:
Read 20 elements of a vector-type matrix A and construct a matrix B of the 
same size with the same elements as matrix A, but in reverse order. 
That is, the first element of A becomes the last element of B, 
the second element of A becomes the second-to-last element of B, and so on. 
Present matrices A and B side by side.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int arrayA[20];
    int arrayALength = sizeof(arrayA) / sizeof(arrayA[0]);
     
    int arrayB[arrayALength];
    int arrayBLength = sizeof(arrayB) / sizeof(arrayB[0]);
    
    int i = 0, j = arrayBLength-1;
    
    do{
        printf("TYPE THE 'INDEX %i' VALUE: ", i);
        scanf("%i", &arrayA[i]);
        
        arrayB[j] = arrayA[i];
        
        i++;
        j--;
    }while(i<arrayALength);
    
    printf("\n=== DISPLAY ARRAY A and B ===\n");

    for(int i = 0; i < arrayALength; i++){
        printf("\narrayA[%i] = %i\n", i, arrayA[i]);
        printf("arrayB[%i] = %i\n", i, arrayB[i]);
    }
    return 0;
}