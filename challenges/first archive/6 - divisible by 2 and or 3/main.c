/******************************************************************************

CHALLENGE:
Read four integer numbers 
and display the numbers that are divisible by 2 and 3.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int numbers[4];
    
    int arrayLength = sizeof(numbers) / sizeof(numbers[0]);
    
    for(int i = 0; i < arrayLength; i++){
        printf("TYPE THE 'NUMBER %i' VALUE: ", i+1);
        scanf("%i", &numbers[i]);
    }
    
    printf("\n\nNUMBERS = {");
    for(int i = 0; i < arrayLength; i++){
        printf(" %i", numbers[i]);
    }
    printf(" }\n");
    
    for(int i = 0; i < arrayLength; i++){
        if(numbers[i]%2 == 0 && numbers[i]%3 == 0){
            printf("\nThe value %i is divisible by 2 and 3!", numbers[i]);
        } else if(numbers[i]%2 == 0){
            printf("\nThe value %i is divisible by 2!", numbers[i]);
        } else if(numbers[i]%3 == 0){
            printf("\nThe value %i is divisible by 3!", numbers[i]);
        }
    }
    return 0;
}
