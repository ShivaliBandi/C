#include<stdio.h>
int main()
{

    int inum=0,itemp=0;
    printf("Enter number");
    scanf("%d",&inum);
    itemp=inum;
    for(int irow=1;irow<=inum;irow++)
    {
        for(int icol=1;icol<=inum;icol++)
        {
            if(icol>=itemp)
                printf("* ");
            else
                printf("  ");
        }
        itemp--;   
        printf("\n");
    }
        

    return 0;

}
/*
Enter number10
                  * 
                * * 
              * * * 
            * * * * 
          * * * * * 
        * * * * * * 
      * * * * * * * 
    * * * * * * * * 
  * * * * * * * * * 
* * * * * * * * * *  
*/