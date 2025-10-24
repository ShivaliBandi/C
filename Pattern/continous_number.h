int continous_number(int inum)
{
    for(int irow=1,icount=1;irow<=inum;irow++)
    {
        for(int icol=1;icol<6;icol++,icount++)
            printf("%d ",icount);
        printf("\n");

    }
    return 0;
}
/*

Enter number5
1 2 3 4 5 
6 7 8 9 10 
11 12 13 14 15 
16 17 18 19 20 
21 22 23 24 25 


*/