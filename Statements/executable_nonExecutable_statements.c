




//STATEMENTS:A statement is the smallest logical entity that can independently exist in C
//In C,expressions do not have any independent existence,so we convert expressions to statements.
//EXECUTABLE STATEMENTS:an executable statements are nothiung but instructions which performs the action when
// we run the program and generates machine code by  the compiler
//NON-EXECUTABLE STATEMETNS:tells the compiles how to build the program,which does not generate any machine code
// by compiler

/*
//erroneous code
//first one
#include<stdio.h>

int main()
{
    clrscr();                      //executable statement
    int a=20;                     //non-executable statement
    printf("a:%d\n",a);          //executable statement
    return 0;                   //executable statement
}
//this code will generate error because there is a rule that..non-executable statements should appear
//only before executable statements within blocks because when compiler compiles a program,it scans all the
// statements from top to bottom so non executable statements can only affect the statements that appears below
**************************************************************************
//second code
#include<stdio.h>
int a=20;                     //non-executable statement
a=a*10;                      //executable statement
int main()
{
    
    printf("a:%d\n",a);          //executable statement
    return 0;                   //executable statement
}
//this code will generate an error because here sequence is right but non executbale statements can appear outside 
//the block  but executable statements should appear only inside block

*/

//correct code
#include<stdio.h>

int main()
{
    int a=10;//non-executable statement
    a=a*20;//executable statement
    printf("a:%d\n",a);//executable statement
    return 0;//executable statement
}
