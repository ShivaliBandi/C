int number_pyramid(int inum)
{
    
    for(int irow=1;irow<=inum;irow++)
    {
        int itemp=1;
        for(int icol=1;icol<=inum-irow;icol++)
            printf(" ");
        for(int icol=1;icol<=irow;icol++)
            printf("%d",icol);
        for(int icol=irow-1;icol>0;icol--)
            printf("%d",icol);
        printf("\n");
    }
    return 0;
}

/*
Enter number10
         1
        121
       12321
      1234321
     123454321
    12345654321
   1234567654321
  123456787654321
 12345678987654321
12345678910987654321
*/