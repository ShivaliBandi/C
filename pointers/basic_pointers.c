#include<stdio.h>
/*
Pointer:It is considered as a variable which stores the address.
As pointer holds an address,address cannot be negative so pointer requires unsigned long integer so store an address
Depends on datatype to which we apply the pointer there are different types of pointers as integer pointer,
character pointer,float pointer,double pointer etc
Depend on the datatype to which out pointer is pointing we can decide how menory bytes of memoru that we can fetch
*/
int main()
{
    char ch='S',*cptr;
    int ino=10,*iptr;
    float fno=4.5,*fptr;
    double dno=2.345,*dptr;
    cptr=&ch;
    iptr=&ino;
    fptr=&fno;
    dptr=&dno;
    printf("Printing Value at that address\nch=%c(character)\tino=%d(integer)\tfno=%f(float)\tdno=%lf(double)\n",*cptr,*iptr,*fptr,*dptr);
    
    return 0;
}
