int inverted_pyramid(int inum)
{
    int itemp=1;
    for(int irow=1;irow<=inum;irow++)
    {
        for(int icol=irow-1;icol>=1;icol--)
            printf(" ");
        for(int icol=2*inum-itemp;icol>=1;icol--)
            printf("*");
        printf("\n");
       itemp+=2;
    }
    return 0;
}

/* 
Enter number10
*******************
 *****************
  ***************
   *************
    ***********
     *********
      *******
       *****
        ***
         *
*/