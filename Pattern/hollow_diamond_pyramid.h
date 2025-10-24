int hollow_diamond_pyramid(int inum)
{

     for(int irow=1;irow<=inum;irow++)
    {
        for(int icol=1;icol<=inum-irow;icol++)
            printf(" ");
        for(int icol=1;icol<=2*irow-1;icol++)
            if(icol==1 || icol==2*irow-1)
                printf("*");
            else
                printf(" ");
        printf("\n");
    }
    int itemp=1;
    for(int irow=1;irow<=inum;irow++)
    {
        for(int icol=irow-1;icol>=1;icol--)
            printf(" ");
        for(int icol=2*inum-itemp;icol>=1;icol--)
            if(icol==1 || icol==2*inum-itemp )
                printf("*");
            else
                printf(" ");
        printf("\n");
       itemp+=2;
    }
    return 0;
}

/*
Enter number10
         *
        * *
       *   *
      *     *
     *       *
    *         *
   *           *
  *             *
 *               *
*                 *
*                 *
 *               *
  *             *
   *           *
    *         *
     *       *
      *     *
       *   *
        * *
         *

*/