/*
DECRALATION STATEMENT:it introduces the name of an identifier along with its data type to compiler beofre its use ,
it does not allocate any memory.
DEFINITION STATEMENT:The memory space for identifier can be reserved.
NULL STATEMENT:IT is simplest form of statement,which does not perform any operations
EXPRESSION STATEMENT:An expression which terminates with a semicolon,is known as expression statement.


*/

#include<stdio.h>

int main()
{
    int a;                           //definition statement
    extern int inum;                 //declaration statement
    ;                                //NULL statement
    a=10+23;                         //expression statement
    lab:printf("Hello World");       //label statement,where lab is label name nd printf(".."); is statement                 
    return 0;                   
}