#include <stdio.h>
#include <string.h>

// Define a structure to represent a student
struct Student {
    char name[50];
    double physics;
    double math;
    double chemistry;
    double score; // Stores the average score
};

int main() {
    // Declare an array of structures for 5 students
    struct Student students[5];

    // Input student information from the file
    FILE *file = fopen("score.txt", "r");
    if (file == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }

    for (int i = 0; i < 5; i++) {
        if (fscanf(file, "%s %lf %lf %lf", students[i].name, &students[i].physics, &students[i].math, &students[i].chemistry) != 4) {
            printf("Error reading data from the file.\n");
            fclose(file);
            return 1;
        }

        // Calculate the average score for the student 
        students[i].score = (students[i].physics + students[i].math + students[i].chemistry)/3;
    }

    fclose(file);

    // Sort students by average score
    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (students[i].score < students[j].score) {
                // Swap the students
                struct Student temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }

    // Display the students sorted by average score
    printf("Students sorted by average score:\n");
    for (int i = 0; i < 5; i++) {
        printf("Name: %s\n", students[i].name);
        printf("Average Score: %.2lf\n", students[i].score);
        printf("\n");
    }

    return 0;
}
