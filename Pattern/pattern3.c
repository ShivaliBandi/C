#include<stdio.h>
int main()
{

    int inum=0;
    printf("Enter number");
    scanf("%d",&inum);
    for(int i=0;i<inum;i++)
        printf("* ");
    printf("\n");

    return 0;

}