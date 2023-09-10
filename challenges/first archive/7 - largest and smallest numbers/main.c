/******************************************************************************

CHALLENGE:
Read five integers and identify the largest and smallest values.

*******************************************************************************/
#include <stdio.h>
#include <limits.h>

int main()
{
    int values[5], smallest = INT_MAX, largest = INT_MIN;
    int arrayLength = sizeof(values) / sizeof(values[0]);
    
    for(int i = 0; i < arrayLength; i++){
        printf("Please, type the 'NUMBER %i' VALUE: ", i+1);
        scanf("%i", &values[i]);
    }
    
    for(int i = 0; i < arrayLength; i++){
        if(values[i] > largest){
            largest = values[i];
        }
        
        if(values[i] < smallest){
            smallest = values[i];
        }
    }
    
    printf("\nSMALLEST: %i\n", smallest);
    printf("LARGEST: %i", largest);
    
    return 0;
}
