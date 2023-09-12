/******************************************************************************

CHALLENGE:
Create a program in C that reads a fruit name and returns a message 
informing the first 4 typed characters.


*******************************************************************************/
#include <stdio.h>

void displayCharacters(char fruit[30]){
    char subArray[4];
    
    for(int i = 0; i < 4; i++){
        subArray[i] = fruit[i];
    }
    
    printf("The first four characters are '%s'.", subArray);
}

int main()
{
    char fruit[30];
    
    printf("Please, type the fruit name: ");
    scanf("%s", fruit);
    
    displayCharacters(fruit);
    
    return 0;
}
