#include<stdio.h>
int main()
{

    int inum=0;
    printf("Enter number");
    scanf("%d",&inum);
    for(int irow=1;irow<=inum;irow++)
    {
        for(int icol=inum;icol>=irow;icol--)
            printf("* ");
        printf("\n");
    }
        

    return 0;

}
/*
Enter number10
* * * * * * * * * * 
* * * * * * * * * 
* * * * * * * * 
* * * * * * * 
* * * * * * 
* * * * * 
* * * * 
* * * 
* * 
* 
*/