/**
    @file h37.cpp
    @author your name here
    @version what day and meeting time
*/
#include <string>
#include <stdexcept>
#include<iostream>
#include<cmath>
// Add additional headers here
using namespace std;

string STUDENT = "malaya";     // Add your name Blackboard/occ-email ID

#include "h37.h"

// Add your implementation here
 MultiChoiceQuestion::MultiChoiceQuestion(const std::string& question)
: ChoiceQuestion(question)
{}    
void MultiChoiceQuestion::addChoice (const std::string& choice, bool correct) 
{
  ChoiceQuestion::addChoice(choice, correct);
this->correct.push_back(correct);
}
void MultiChoiceQuestion::checkAnswer()const
{
 cout << "Answer all that apply, (spaces between) > ";
    string response;
    getline(cin, response); 
int posPass = 0;
int passing = 0;
int posFail = 0;
int failing = 0;
string possible = "123456789";
for(unsigned i = 0 ; i<correct.size();i++)
{
if(correct[i])
{
  posPass++;
passing += response.find(possible[i]) != std::string::npos;    
    
}
else
{
    posFail++;
    failing += response.find(possible[i]) != std::string::npos;
}
}    
 double precentPass = (posPass >0) ? static_cast<double>(passing) / posPass : 1 ; 
double precentFail = (posFail >0) ? static_cast<double>(failing) / posFail  : 0 ;  

cout << endl;
cout <<"Correct answers [ ";
if(posPass)
{
    for(unsigned i =0 ; i<correct.size();i++)
    if(correct[i])
        cout << (i + 1) << " ";
}

cout << "]"<<endl;
cout << "You answered " << passing << "/" << posPass
<< "questions correctly (" << (precentPass *100) << "%)" << endl;


cout << "You wrongly answered " << failing << "/" << posFail
<< "questions correctly (" << (precentFail *100) << "%)" << endl;


cout << "Your total weighted score for this question is " << floor(((precentPass - (precentFail*1.25)) * 100) + .5) <<"%" <<endl;

cout << endl;
}
