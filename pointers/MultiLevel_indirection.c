#include<stdio.h>
int main()
{
    char *titles[]={"Linux Programming Interface","Linux System Programming","Linux Kernel Programming",
                    "Robert Love","Dennis Ritchie"};
    char **BookNames[3];
    char **AuthorNames[2];
    BookNames[0]=&titles[0];
    BookNames[1]=&titles[1];
    BookNames[2]=&titles[2];
    AuthorNames[0]=&titles[3];
    AuthorNames[1]=&titles[4];
    printf("%c",*BookNames[0][1]);
    printf("\n%s",*BookNames[0]);
    return 0;
}