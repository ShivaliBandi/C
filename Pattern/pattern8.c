#include<stdio.h>
int main()
{

    int inum=0;
    printf("Enter number");
    scanf("%d",&inum);
    
    for(int irow=1;irow<=inum;irow++)
    {
        for(int icol=1;icol<=inum;icol++)
        {
            if(irow==1 || irow==inum || icol==1 || icol==inum)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
        

    return 0;

}
/*
Enter number10
* * * * * * * * * * 
*                 * 
*                 * 
*                 * 
*                 * 
*                 * 
*                 * 
*                 * 
*                 * 
* * * * * * * * * * 
*/