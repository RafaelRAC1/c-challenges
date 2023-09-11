/******************************************************************************

CHALLENGE:
Develop a program that reads the names of 5 students and their two semester 
grades. In the end, the name of each student should be presented in ascending 
numerical order of their annual averages.

*******************************************************************************/
#include <stdio.h>

struct Student {
    char name[20];
    float firstScore;
    float secondScore;
    float average;
};

int main()
{
    struct Student student[5];
    int size = sizeof(student) / sizeof(student[0]);
    
    for(int i = 0; i < size; i++){
        printf("=== %iº STUDENT ===\n", i+1);
        printf("Name: ");
        scanf("%s", student[i].name);

        printf("First semester score: ");
        scanf("%f", &student[i].firstScore);

        printf("Second semester score: ");
        scanf("%f", &student[i].secondScore);
        
        student[i].average = (student[i].firstScore+student[i].secondScore)/2;
        printf("\n");
    }
    
    
    struct Student temp;
    int swapped;

    for(int i = 0; i < size; i++){
        swapped = 0; 
        for (int j = 0; j < size - i - 1; j++) {
            if (student[j].average > student[j + 1].average) {
                temp = student[j];
                student[j] = student[j + 1];
                student[j + 1] = temp;
                swapped = 1; 
            }
        }

        if (swapped == 0) {
            break;
        }
    }
    
    printf("\n=== DISPLAYING DATA ===\n");
    for(int i = 0; i < size; i++){
        printf("Name: %s\n", student[i].name);
        printf("Average: %0.2f\n\n", student[i].average);
    }
    return 0;
}