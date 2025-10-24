int alphabet_pyramid(int inum)
{
    
    for(int irow=1;irow<=inum;irow++)
    {
        int itemp=1;
        for(int icol=1;icol<=inum-irow;icol++)
            printf(" ");
        for(int icol=0;icol<irow;icol++)
            printf("%c",'A'+icol);
        for(int icol=irow-2;icol>=0;icol--)
            printf("%c",'A'+icol);
        printf("\n");
    }
    return 0;
}

/*
Enter number10
         A
        ABA
       ABCBA
      ABCDCBA
     ABCDEDCBA
    ABCDEFEDCBA
   ABCDEFGFEDCBA
  ABCDEFGHGFEDCBA
 ABCDEFGHIHGFEDCBA
ABCDEFGHIJIHGFEDCBA
*/