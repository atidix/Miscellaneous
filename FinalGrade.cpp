#include <iostream>
#include <cstdlib>

using namespace std;

float asgn(float, float, float, float);

float fnlgrd(float, float, float);

int main() {

float first_asgn, second_asgn, third_asgn, fourth_asgn, midterm, fnl, section_grade, x, y, a, b, FNL ;

cout << "Enter the score for the first assignment. " ;

cin >> first_asgn ;

cout << "Enter the score for the second assignment. " ;

cin >> second_asgn ; 

cout << "Enter the score for the third assignment. " ;

cin >> third_asgn ;

cout << "Enter the score for the fourth assignment. " ;

cin >> fourth_asgn ;

cout << "Enter the score for the midterm. " ;

cin >> midterm ;

cout << "Enter the score for the final. " ;

cin >> fnl ;

cout << "Enter the score for the section grade. " ;

cin >> section_grade ;

cout << "The final grade is. " << asgn (first_asgn, second_asgn, third_asgn, fourth_asgn) + fnlgrd (midterm, fnl, section_grade) ;

return 0 ;

}


float asgn(float first_asgn, float second_asgn, float third_asgn, float fourth_asgn) {

float x = ((first_asgn + second_asgn + third_asgn + fourth_asgn) / 4) * 0.4 ;

return (x);

}

float fnlgrd (float midterm, float fnl, float section_grade) {

midterm = midterm * 0.15 ;

fnl = fnl * 0.35 ;

section_grade = section_grade * 0.10 ;

float FNL = midterm + fnl + section_grade;

return (FNL) ;

}
