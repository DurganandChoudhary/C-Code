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

    // Input student information
    for (int i = 0; i < 5; i++) {
        printf("Enter the name of student %d: ", i + 1);
        scanf("%s", students[i].name);
        printf("Enter the physics score for %s: ", students[i].name);
        scanf("%lf", &students[i].physics);
        printf("Enter the math score for %s: ", students[i].name);
        scanf("%lf", &students[i].math);
        printf("Enter the chemistry score for %s: ", students[i].name);
        scanf("%lf", &students[i].chemistry);

        // Calculate the average score for the student
        students[i].score = (students[i].physics + students[i].math + students[i].chemistry) / 3;
    }

    // Find the student with the highest score
    int highestIndex = 0;
    double highestScore = students[0].score;

    for (int i = 1; i < 5; i++) {
        if (students[i].score > highestScore) {
            highestScore = students[i].score;
            highestIndex = i;
        }
    }

    // Display the student with the highest score
    printf("Student with the highest score:\n");
    printf("Name: %s\n", students[highestIndex].name);
    printf("Average Score: %.2lf\n", students[highestIndex].score);

    return 0;
}