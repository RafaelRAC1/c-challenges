/******************************************************************************

CHALLENGE:
Develop a program in C that reads name, gender and age of 10 people.
If the inserted gender is 'female' and age equal or higher 
than 18, the program should output "Data's correct.". Else, it should output:
"Data's incorrect"



*******************************************************************************/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

bool isCorrect(int age, const char* gender) {
    char formattedGender[30];
    strcpy(formattedGender, gender);

    for (int i = 0; formattedGender[i]; i++) {
        formattedGender[i] = tolower(formattedGender[i]);
    }

    if (age >= 18 && strcmp(formattedGender, "female") == 0) {
        return true;
    } else {
        return false;
    }
}

struct Person {
    char name[30];
    int age;
    char gender[30];
};

int main() {
    struct Person people[10];
    int peopleAmount = sizeof(people) / sizeof(people[0]);

    for (int i = 0; i < peopleAmount; i++) {
        printf("=== PERSON %i ===\n", i + 1);
        printf("Type the name: ");
        scanf("%s", people[i].name);
        printf("Type the age: ");
        scanf("%i", &people[i].age);
        printf("Type the gender: ");
        scanf("%s", people[i].gender);

        if (isCorrect(people[i].age, people[i].gender)) {
            printf("Data's correct!\n");
        } else {
            printf("Data's incorrect!\n");
        }
    }

    return 0;
}
