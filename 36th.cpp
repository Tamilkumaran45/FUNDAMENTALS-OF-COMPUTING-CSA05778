#include <stdio.h>

int main() {
    // Initialize counters for each grade category
    int numAs = 0, numBs = 0, numCs = 0, numDs = 0, numFs = 0;
    int studentNum, numGrade;
    
    // Loop over each of the 200 students
    for (int i = 0; i < 200; i++) {
        // Prompt for student number and number grade
        printf("Enter student number: ");
        scanf("%d", &studentNum);
        printf("Enter number grade: ");
        scanf("%d", &numGrade);
        
        // Convert number grade to letter grade
        char letterGrade;
        if (numGrade >= 90) {
            letterGrade = 'A';
            numAs++;
        } else if (numGrade >= 78) {
            letterGrade = 'B';
            numBs++;
        } else if (numGrade >= 65) {
            letterGrade = 'C';
            numCs++;
        } else if (numGrade >= 50) {
            letterGrade = 'D';
            numDs++;
        } else {
            letterGrade = 'F';
            numFs++;
        }
        
        // Print out student info
        printf("Student %d - Number Grade: %d - Letter Grade: %c\n", studentNum, numGrade, letterGrade);
    }
    
    // Print out total number of each grade category
    printf("Total number of As: %d\n", numAs);
    printf("Total number of Bs: %d\n", numBs);
    printf("Total number of Cs: %d\n", numCs);
    printf("Total number of Ds: %d\n", numDs);
    printf("Total number of Fs: %d\n", numFs);
    
    return 0;
}
