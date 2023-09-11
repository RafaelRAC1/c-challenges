/******************************************************************************

CHALLENGE:
Using the C language, create a function that returns whether the character 
entered by the user is a vowel. If it's a consonant, the function should 
return zero.

*******************************************************************************/
#include <stdio.h>
#include <ctype.h>

int checkVowel(char character){
    char localChar = tolower(character);
    switch(localChar){
        case 'a': 
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            return 1;
        default:
            return 0;
    }
}

int main()
{
    char c;
    
    printf("Please, type the 'CHARACTER': ");
    scanf("%c", &c);
    
    printf("1 means vowel, and 0 consonant\nYour character is: %i", checkVowel(c));
    return 0;
}
