// C program to illustrate do-while loop 
#include <stdio.h> 
  
int main() 
{ 
    int i = 2; // Initialization expression 
  
    do
    { 
        // loop body 
        printf( "Hello World\n");     
  
        // update expression 
        i++; 
  
    }  while (i < 1);   // test expression 
  
    return 0; 
} 