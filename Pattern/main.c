#include<stdio.h>
#include"pyramid.h"
#include"inverted_pyramid.h"
#include"diamond_pyramid.h"
#include"hollow_pyramid.h"
#include"hollow_diamond_pyramid.h"
int main()
{

    int inum=0;
    printf("Enter number");
    scanf("%d",&inum);
    //pyramid(inum);
    //inverted_pyramid(inum);
   // diamond_pyramid(inum);
   //hollow_pyramid(inum);
   hollow_diamond_pyramid(inum);
    return 0;

}
