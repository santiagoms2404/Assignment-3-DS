/*
Programmer  : Santiago Marin
Program     : Student implementation
Date        : March. 9, 2021

*/
 #include"student.h"
 using namespace std;

 Student::Student(const string& pName ="", float pGpa=0.0, int pSemester=0) {} //definition of the student constructor

 string Student::getName() const{return name;}      //accessor functions to get the values
 float Student::getGpa() {return gpa;}
 int Student::getSemester() {return semester;}

 void Student::set(const string& pName, float pGpa, int pSemester){       // mutator functions
    name = pName;
    gpa = pGpa;
    semester = pSemester;
 } 


