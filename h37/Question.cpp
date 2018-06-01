/*
 * Question.cpp
 * @author Cay Horstmann from CPPFE 2nd, Chapter 11
 * @author modified extensively by Stephen Gilbert.
 * @version CS 150 Spring 2013
 */
#include <iostream>
#include <string>
#include <sstream>
#include <cctype>
#include <algorithm>
using namespace std;

#include "Question.h"

Question::Question(const string& question, const string& answer)
    : text(question), answer(answer) { }

void Question::setAnswer(const string& correct)
{
   answer = correct;
}

// A few inline helper functions
inline void removeSpace(string& str) {
    str.erase(remove_if(str.begin(), str.end(), ::isspace), str.end());
}

inline void toUpper(string& str) {
    transform(str.begin(), str.end(),str.begin(), ::toupper);
}

// Allows differences in spacing in answer and differences in letter case.
void Question::checkAnswer() const
{
    cout << "Your answer > ";
    string response;
    getline(cin, response);

    string tweakedResponse = response; // copy
    string tweakedAnswer = answer; // copy

    // Remove spaces and uppercase
    removeSpace(tweakedResponse);
    removeSpace(tweakedAnswer);
    toUpper(tweakedResponse);
    toUpper(tweakedAnswer);

    cout << endl;
    if (tweakedResponse == tweakedAnswer)
        cout << "Your answer, " << response << " is correct." << endl;
    else
        cout << "Sorry, the correct answer is " << answer << endl;
}

void Question::display() const
{
   cout << text << endl;
}

// Empty destructor
Question::~Question() {}


/////// ChoiceQuestion Methods //////////////////
ChoiceQuestion::ChoiceQuestion(const string& question)
    : Question(question)
{
}

/**
   Adds an answer choice to this question.
   @param choice the choice to add
   @param correct true if this is the correct choice,
   false otherwise
*/
void ChoiceQuestion::addChoice(const string& choice, bool correct)
{
    choices.push_back(choice);
    if (correct)
    {
       // Convert choices.size() to string
       ostringstream out;
       out << choices.size();
       setAnswer(out.str());
    }
}

void ChoiceQuestion::display() const
{
    Question::display();
    // Display the answer choices
    for (unsigned i = 0; i < choices.size(); i++)
    {
        cout << i + 1 << ": " << choices[i] << endl;
    }
}
