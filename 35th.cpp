#include <stdio.h>

int main() {
    char course[50];
    char grade;
    int units, total_units = 0;
    float grade_point, total_grade_points = 0, gpa;

    // Get input from user
    printf("Enter course name, letter grade, and number of units:\n");
    printf("(Enter Q to quit)\n");

    while (1) {
        printf("Course: ");
        scanf("%s", course);

        if (course[0] == 'Q') {
            break;
        }

        printf("Grade: ");
        scanf(" %c", &grade);

        printf("Units: ");
        scanf("%d", &units);

        // Calculate grade point for course
        switch (grade) {
            case 'A':
                grade_point = 4.0;
                break;
            case 'B':
                grade_point = 3.0;
                break;
            case 'C':
                grade_point = 2.0;
                break;
            case 'D':
                grade_point = 1.0;
                break;
            case 'F':
                grade_point = 0.0;
                break;
            default:
                printf("Invalid grade entered.\n");
                continue;
        }

        // Update total units and grade points
        total_units += units;
        total_grade_points += grade_point * units;
    }

    // Calculate GPA
    if (total_units > 0) {
        gpa = total_grade_points / total_units;
    } else {
        gpa = 0;
    }

    // Print GPA
    printf("GPA: %.2f\n", gpa);

    return 0;
}
