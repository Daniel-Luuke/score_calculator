// Include standard input/output library
// Gives acces to printf(output) and fgets/scanf(input) functions
#include <stdio.h>

//Include string library
//Gives access to string manipulation functions like strcspn
#include <string.h>

//Define constants for maximum length of strings and maximum score
#define MAX_LEN 100
#define MAX_SCORE 100

//program entry point
int main(){
    char studentName[MAX_LEN];
    char course[MAX_LEN];

    int score1, score2, score3; //Whole numbers - test scores
    int totalScore;             //Whole number - total score

    double average;     //Decimal number - average
    double percentage;  //Decimal number - percentage

    //printf displays text on the screen
    //\n means "new line" - moves the cursor to the next line
    printf("======================================\n");
    printf(" STUDENT SCORE CALCULATOR\n");
    printf("======================================\n\n");

    // INPUT: STUDENT NAME
    // fgets reads a full line of text including spaces.
    // It stores the result in the studentName array.
    // MAX_LEN tells fgets the maximum characters to read.
    // stdin means "standard input" (the keyboard).
    printf("Enter student name: ");
    fgets(studentName, MAX_LEN, stdin);
    studentName[strcspn(studentName, "\n")] = '\0'; // Remove newline character from the end of the string

    printf("Enter course (BBIT/BCS): ");
    fgets(course, MAX_LEN, stdin);
    course[strcspn(course, "\n")] ='\0';

    // INPUT: TEST SCORES
    // scanf reads numbers. The & symbol gives the address of
    // the variable so scanf knows where to store the value.
    // %d is the format specifier for integers.
    printf("Enter score for Test 1: ");
    scanf("%d", &score1);

    printf("Enter score for Test 2: ");
    scanf("%d", &score2);

    printf("Enter score for Test 3: ");
    scanf("%d", &score3);

    totalScore = score1 + score2 + score3;
    average = totalScore / 3.0;
    percentage = (totalScore / 300.0) * 100;

    // OUTPUT: REPORT CARD
    // %.2f formats a decimal number to 2 places.
    // %s formats a string (char array).
    // %d formats an integer.
    printf("\n");
    printf("======================================\n");
    printf(" REPORT CARD\n");
    printf("======================================\n");

    printf("Student:   %s", studentName);
    printf("Course:    %s\n", course);
    printf("\n");
    printf("Test 1:    %d/%d\n", score1, MAX_SCORE);
    printf("Test 2:    %d/%d\n", score2, MAX_SCORE);
    printf("Test 3:    %d/%d\n", score3, MAX_SCORE);
    printf("\n");
    printf("Total:     %d/300\n", totalScore);
    printf("Average:   %.2f\n", average);
    printf("Percentage: %.2f%%\n", percentage);
    printf("\n");

    if (percentage >= 50){
        printf("Result:    PASS\n");
    } else {
        printf("Result:    FAIL\n");
    }

    printf("======================================\n");

    return 0;
}