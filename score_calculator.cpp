#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main(){

//VARIABLE DECLARATION
string studentName;
string course;
int score1, score2, score3;
int totalScore;
double average;
double percentage;

//CONSTANT DECLARATION
const int MAX_SCORE = 100;

//WELCOME BANNER
cout << "======================================" << endl;
cout <<" STUDENT SCORE CALCULATOR" << endl;
cout << "======================================" << endl;
cout << endl;

//================================
//QUESTION 1: STUDENT NAME
//================================
cout << "Enter Student Name: ";
getline(cin, studentName);

//================================
//QUESTION 2: COURSE
//================================
cout << "Enter Course (BBIT/BCS): ";
getline(cin, course);

//================================
//QUESTION 3: TEST SCORES
//================================
cout << "Enter score for Test 1: ";
cin >> score1;
cout << "Enter score for Test 2: ";
cin >> score2;
cout << "Enter score for Test 3: ";
cin >> score3;

//================================
//CALCULATION 1: TOTAL SCORE
//================================
totalScore = score1 + score2 + score3;

//================================
//CALCULATION 2: AVERAGE
//================================
average = totalScore / 3.0;

//================================
//CALCULATION 3: PERCENTAGE
//================================
percentage = (totalScore / 300.0) * 100;

//================================
// DISPLAY REPORT CARD
//================================

cout << endl;
cout << "======================================" << endl;
cout << " REPORT CARD" << endl;
cout << "======================================" << endl;
cout << endl;

cout<< "Student: " << studentName << endl;
cout<< "Course: " << course << endl;
cout << endl;
cout << "Test 1 Score: " << score1 <<"/" << MAX_SCORE << endl;
cout << "Test 2 Score: " << score2 <<"/" << MAX_SCORE << endl;
cout << "Test 3 Score: " << score3 <<"/" << MAX_SCORE << endl;
cout << endl;
cout << "Total: "<<totalScore<<"/300" << endl;
cout << "Average: "<< fixed << setprecision(2) << average << endl;
cout << "Percentage: "<< fixed << setprecision(2) << percentage << "%" << endl;
cout << endl;

//Determine pass or fail
if(percentage >= 50){

    cout << "Result: PASS" << endl;
}
else{
    cout << "Result: FAIL" << endl;
}
cout<< "======================================" << endl;

return 0;
}