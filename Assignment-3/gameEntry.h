/*
Programmer  : Santiago Marin
Program     : Game Entry Interface
Date        : March. 9, 2021

*/

#include <iostream>
#include <string>
#include"student.h"
using namespace std;

class GameEntry : public Student {                   // a game score entry
    public:
        GameEntry(const string& pName, const string& sn, int pScore=0, float pGpa=0.0, int pSemester=0){} //definition of the sport name for the student
        GameEntry();
        string getSportName() const;                 // get player sport name
        int getScore();                              // get the score of the game 
        string set(const string& sn, int score);     // set the name of the sport

        friend bool compare(GameEntry players[2]);      // compare the two players 

        friend ostream& operator <<(ostream& outs, const GameEntry&);    // display the outputs to the screen

    private:
        string sportName;                            // player's sport name
        int score;                                   // player's score
        
}; 
