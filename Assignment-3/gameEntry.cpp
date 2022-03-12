/*
Programmer  : Santiago Marin
Program     : Game Entry Implementation
Date        : March. 9, 2021

*/

#include"gameEntry.h"
using namespace std;

GameEntry::GameEntry(const string& pName, const string& sn, int pScore=0, float pGpa=0.0, int pSemester=0){}        //definition of the sport name for the student
GameEntry::GameEntry(){}

string GameEntry::getSportName() const{             // Accessor and mutator function definitions
    return sportName; 
}
int GameEntry::getScore(){
    return score;
}               
string GameEntry::set(const string& sn, int pScore){
    sportName = sn;
    score = pScore;
} 

bool compare(GameEntry players[2]){
    int size = 2;
    GameEntry players[size]={{"Santiago ", "soccer ", 1, 3.8, 3} , {"Jose ", "soccer ", 2, 3.6, 3}};
        for(int i=0;i<size;i++)
            while((players[0].getSportName() == players[1].getSportName()) && (players[0].getSemester() == players[1].getSemester())){
                if ((players[0].getGpa() > players[1].getGpa()) && (players[0].getScore() > players[1].getScore())) 
                {
                    cout << "Santiago has a better GPA and greater score than Jose " << endl;
                }
                else if ((players[0].getGpa() > players[1].getGpa()) && (players[0].getScore() < players[1].getScore()))
                {
                    cout << "Santiago has a better GPA, but Jose has a greater score " << endl;
                }
                else if ((players[0].getGpa() < players[1].getGpa()) && (players[0].getScore() < players[1].getScore()))
                {
                    cout << "Jose has a better GPA and greater score than Santiago  " << endl;
                }
                else if ((players[0].getGpa() < players[1].getGpa()) && (players[0].getScore() > players[1].getScore()))
                {
                    cout << "Jose has a better GPA, but Santiago has a greater score " << endl;
                }
                else if ((players[0].getGpa() == players[1].getGpa()) && (players[0].getScore() == players[1].getScore()))
                {
                    cout << "Both Jose and Santiago have the same GPA and score " << endl;
                }               
            else{
                cout << "These players can not be compared because they dont play the same sport and they are not in the same semester. " << endl;
            }
        }             
}

ostream& operator <<(ostream& outs, const GameEntry& name){
    outs << "Student name: " << name << endl;
    outs << "Student sport: " << sportName << endl;
    outs << "Score in game: " << score << endl;
    outs << "Student GPA: " << gpa << endl;
    outs << "Student semester: " << semester << endl;
}