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

//================================
//WELCOME BANNER
cout << "======================================" << endl;
cout <<" STUDENT SCORE CALCULATOR" << endl;
cout << "======================================" << endl;

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
cout << "Enter score for Test 1:";
cin >> score1;
cout << "Enter score for Test 2:";
cin >> score2;
cout << "Enter score for Test 3:";
cin >> score3;



    return 0;
}