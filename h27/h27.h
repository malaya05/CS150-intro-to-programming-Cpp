/**
    @file h27.h
    @author Your name goest here
    @version what day and meeting time
*/
#ifndef H27_H_
#define H27_H_

// Uncomment the following line once your Bug class is defined
#define BUG_DONE
class Bug 
{
  public:
Bug(int initialPosition);
int getPosition() const;
void turn();
void move();
  
  private:
      int position;
  bool isLeft;
};


#endif
