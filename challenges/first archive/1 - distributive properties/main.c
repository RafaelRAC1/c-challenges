/******************************************************************************

CHALLENGE:
Read four integer numbers and present the result of addition and multiplication, 
based on the use of the concept of the distributive property. 
In other words, if variables A, B, C, and D are read, they should be added 
and multiplied as follows: A with B, A with C, and A with D. Then, B with C, B 
with D, and finally, C with D. Note that it will be necessary to 
perform six addition operations and six multiplication operations and present 
twelve output results.


*******************************************************************************/
#include <stdio.h>

int main()
{
    int a, b, c, d, i = 0;
    
    printf("Please, type variable 'A' value: ");
    scanf("%i", &a);
    
    printf("Please, type variable 'B' value: ");
    scanf("%i", &b);
    
    printf("Please, type variable 'C' value: ");
    scanf("%i", &c);
    
    printf("Please, type variable 'D' value: ");
    scanf("%i", &d);
    
    int variables[] = {a, b, c, d};
    int num_variables = sizeof(variables) / sizeof(variables[0]);

    for (int i = 0; i < num_variables; i++) {
        for (int j = i + 1; j < num_variables; j++) {
            int sum = variables[i] + variables[j];
            int product = variables[i] * variables[j];
            printf("%c + %c = %d\n", 'A' + i, 'A' + j, sum);
            printf("%c * %c = %d\n", 'A' + i, 'A' + j, product);
        }
    }

    return 0;
}
