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