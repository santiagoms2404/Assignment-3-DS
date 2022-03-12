/*
Programmer  : Santiago Marin
Program     : Student Interface
Date        : March. 9, 2021

*/

#include<iostream>
#include<string>
using namespace std;

class Student{

    private:
        string name;
        float gpa;
        int semester;

    public:
        Student(const string& pName ="", float pGpa=0.0, int pSemester=0);      //Constructor to create a student
        string getName() const;     //Get the name of the student
        float getGpa();             //Get the GPA of the student
        int getSemester();          //Get the semester in which the student is currently studying

        void set(const string& pName, float pGpa, int pSemester);   //mutator functions


};