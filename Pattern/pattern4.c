#include<stdio.h>
int main()
{

    int inum=0;
    printf("Enter number");
    scanf("%d",&inum);
    for(int irow=1;irow<=inum;irow++)
    {
        for(int icol=1;icol<=inum;icol++)
            printf("%d ",irow);
        printf("\n");
    }
        

    return 0;

}
/*
Enter number5
1 1 1 1 1 
2 2 2 2 2 
3 3 3 3 3 
4 4 4 4 4 
5 5 5 5 5 
*/