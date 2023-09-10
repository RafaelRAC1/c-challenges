/******************************************************************************

CHALLENGE:
Read three values (variables A, B, and C) and display them in ascending order.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int values[3];
    int arrayLength = sizeof(values) / sizeof(values[0]);
    
    for (int i = 0; i < arrayLength; i++) {
        printf("Please, type the value of 'NUMBER %i': ", i + 1);
        scanf("%i", &values[i]);
    }
    
    int temp;
    int swapped;

    for (int i = 0; i < arrayLength - 1; i++) {
        swapped = 0; 
        for (int j = 0; j < arrayLength - i - 1; j++) {
            if (values[j] > values[j + 1]) {
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
    
    printf("Displaying in ascending order: %i, %i, %i\n", values[0], values[1], values[2]);
    return 0;
    
}
