#include<stdio.h>

int main()
{
    //example of simple statements:line number 5,6,7
    int a=20;                     //defination statement
    a+10;                         //expression  statement
    a=a*10;                      //assignement  statement
   example(a);
    
    return 0;                   
}
 //**************Compound statement******************
  /*
    //A compound statement is nothing but sequence of simple statements and declarations.
    //A compound statement is also known as block,it need not to be terminated by semi-colon
    //if it is terminated by semi=colon there wont be any compilation error but it will be interpreted in different way
    //compound statements can be empty example:
    //int fun(){}
    an empty compound statement is equivalent to null statement,but it cannot act as terminator of statement
    NULL STATEMENT:it is the simplest form of program statement and performs no operation.

 */
void example(int inumber)
{
    int ivalue=10;
    inumber=ivalue+inumber;
    printf("\nINUMBER:%d\n",inumber);

}