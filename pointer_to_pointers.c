#include<stdio.h>
int main()
{
    int inumber=10;
    int *ptr,**pptr,***ppptr,****pppptr;
    ptr=&inumber;
    pptr=&ptr;
    ppptr=&pptr;
    pppptr=&ppptr;
    printf("inumber->%d\n*ptr->%d\nptr->%p\n**pptr->%d\npptr->%p\n*pptr->%p\n",inumber,*ptr,ptr,**pptr,pptr,*pptr);
    char ch='M',*p=&ch;
    printf("\n\n%ld\t%ld\t%ld\t%ld\n",sizeof(ch),sizeof(&ch),sizeof(p),sizeof(*p));
    return 0;
}