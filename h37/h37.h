/*
 *  h37.h
 *  @author <your name here>
 *  @version what day and meeting time
 *
 *  The MultiChoiceQuestion class.
 */

#ifndef H37_H_
#define H37_H_

#include "Question.h"
#include <string>
#include <vector>

// Define the MultiChoiceQuestion class here
class MultiChoiceQuestion : public ChoiceQuestion
{
  public:
    MultiChoiceQuestion(const std::string& question);  
void addChoice (const std::string& choice, bool correct) ;
void checkAnswer()const;
private:
std::vector<bool>correct;    
    
};
#endif
