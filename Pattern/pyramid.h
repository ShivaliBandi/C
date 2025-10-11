int pyramid(int inum)
{

    for(int irow=1;irow<=inum;irow++)
    {
        for(int icol=1;icol<=inum-irow;icol++)
            printf(" ");
        for(int icol=1;icol<=2*irow-1;icol++)
            printf("*");
        printf("\n");
    }
    return 0;
}

/*
Enter number10
         *
        ***
       *****
      *******
     *********
    ***********
   *************
  ***************
 *****************
*******************
*/