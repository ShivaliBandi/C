/*
C does not provide array index out-of-bound check
the program having array index out of bound will compile and execute but will access to the memory location that
does not belong to array
*/
#include<stdio.h>
int main()
{
    int arr[5];
    arr[0]=10;
    arr[1]=20;
    arr[2]=30;
    arr[3]=40;
    arr[4]=50;
    //accessing array
    for(int icnt=0;icnt<10;icnt++)
        printf("index %d-->%d\n",icnt,arr[icnt]);
    return 0;
}