/*
 * Question.h
 * @author Cay Horstmann from CPPFE 2nd, Chapter 11
 * @author modified extensively by Stephen Gilbert.
 */

#ifndef QUESTION_H_
#define QUESTION_H_
#include <string>
#include <vector>

class Question
{
public:
   /**
    * Constructs a question.
    * @param question the question text.
    * @param correct the correct answer.
    */
   Question(const std::string& question = "", const std::string& correct = "");

   /**
    * Sets (or changes) the question text
    * @param text the text for this question
   */
   void setText(const std::string& newText);

   /**
    * Sets the answer for this question
    * @param correct_answer the answer for this question
   */
   void setAnswer(const std::string& correct_answer);

   /**
    *   Gets the user's response and checks the answer
    */
   virtual void checkAnswer() const;

   /**
      Displays this question.
   */
   virtual void display() const;

   /**
    * Virtual destructor (always when you have virtual methods)
    */
   virtual ~Question();

private:
   std::string text;
   std::string answer;
};

class ChoiceQuestion : public Question
{
public:
   /**
      Constructs a choice question with no choices.
      @question the question text.
   */
   ChoiceQuestion(const std::string& question);

   /**
      Adds an answer choice to this question.
      @param choice the choice to add
      @param correct true if this is the correct choice,
      false otherwise
   */
   virtual void addChoice(const std::string& choice, bool correct = false);
   virtual void display() const;
private:
   std::vector<std::string> choices;
};


///////////////////////// MACROS FOR TESTING - YOU CAN IGNORE THESE /////////////////////
#define SETUP(Q, C1, C2, C3, C4, C5) \
{\
    cerr << endl; \
    cerr << " > Testing-" << Q << endl; \
    streambuf * oldOut = cout.rdbuf(); \
    streambuf * oldIn = cin.rdbuf(); \
    ostringstream out; istringstream in; \
    cout.rdbuf(out.rdbuf()); cin.rdbuf(in.rdbuf()); \
    MultiChoiceQuestion q(Q); \
    q.addChoice("Choice 1", C1); \
    q.addChoice("Choice 2", C2); \
    q.addChoice("Choice 3", C3); \
    q.addChoice("Choice 4", C4); \
    q.addChoice("Choice 5", C5); \
    q.display(); \
    string result = out.str(); \

#define INPUT(S)  cerr << endl << "   -- Input: [" << S << "]" << endl; \
    out.clear(); out.str(""); cin.clear(); in.clear(); in.str(S); q.checkAnswer(); result = out.str();
    //cerr << endl << result << endl;

#define CHECK(E) assertTrueMsg(result.find(E) != string::npos, "Checking " #E)

#define CLEANUP() \
    cout.rdbuf(oldOut); cin.rdbuf(oldIn); \
}
#endif /* QUESTION_H_ */
