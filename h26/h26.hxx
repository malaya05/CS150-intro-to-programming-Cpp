#include "h26.h"
#include <string>
// Add your implementation here
void rotateRight(int a[][SIZE])
{
int temp[SIZE][SIZE] ;
    
for(int r = 0; r< SIZE; r++)
{
for(int c = 0; c < SIZE; c++)
    {
     temp[r][c] = a[SIZE-1-c][r];   
    }


}    
    

for(int r = 0; r< SIZE; r++)
{
for(int c = 0; c < SIZE; c++)
    {
      a[r][c]= temp[r][c] ;  
    }


}    
    
    
    
    
    
    
    
}
