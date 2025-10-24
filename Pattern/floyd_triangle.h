int floyd_triangle(int inum)
{
    int icount=1;
    for(int irow=1;irow<=inum;irow++)
    {
        for(int icol=1;icol<=irow;icol++)
        {
            printf("%d ",icount);
            icount++;
        }
            
        printf("\n");

    }
        
    return 0;
}

/*

Enter number5 
1 
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15 


*/