/******************************************************************************

CHALLENGE:
Present all numbers divisible by 4 that are less than 200. 
To check if a number is divisible by 4, perform the logical verification 
within the loop with an 'if' statement, asking if the number is divisible; 
if it is, display it; if it is not, move on to the next step. 
The variable that will control the counter should be initialized 
with the value 1.

*******************************************************************************/
#include <stdio.h>

int main()
{
    for(int i = 1; i < 200; i++){
        if(i%4 == 0){
            printf("THE NUMBER '%i' IS DIVISIBLE BY 4\n", i);
        }
    }
    return 0;
}
