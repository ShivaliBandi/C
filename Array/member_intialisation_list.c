/*
   we can initialised element of array of two ways
   1)member by member initialisation
   2)member initialisation list
*/
#include<stdio.h>
int main()
{
    //member by member intialisation
    int arr[5]={10,20,30,40,50};

    //member by member intialisation
    //when we intialize using memeber intialisation list and if array size of 10 and initialise 5 element remaining
    //elements get default value(0,\0',0.000....), storage class doesnt matter 
    
    //accessing array
    for(int icnt=0;icnt<5;icnt++)
        printf("%d\n",arr[icnt]);
    return 0;
}