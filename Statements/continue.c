// C program to explain the use  
// of continue statement  
#include <stdio.h> 
  
int main() { 
    // loop from 1 to 10  
    for (int i = 1; i <= 10; i++) {  
  
        // If i is equals to 6,  
        // continue to next iteration  
        // without printing  
        if (i == 6)  
            continue;  
  
        else
            // otherwise print the value of i  
            printf("%d ", i);  
    }  
  
    return 0;  
} 