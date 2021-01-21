/*
   we can initialised element of array of two ways
   1)member by member initialisation
   2)member initialisation list
*/
#include<stdio.h>
int main()
{
    //member by member intialisation
    //when we intialize using memeber by member and if array size of 10 and initialise 5 element remaining
    //elements are get default value according to its storage class'S default value
    int arr[5];
    arr[0]=10;
    arr[1]=20;
    arr[2]=30;
    arr[3]=40;
    arr[4]=50;
    //accessing array
    for(int icnt=0;icnt<5;icnt++)
        printf("%d\n",arr[icnt]);
    return 0;
}