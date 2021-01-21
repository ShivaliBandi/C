/*
    1)Array is dervied datatype
    2)Array is considered as collection of homogenous element in sequential manner
    3)We can create array of 
        i)primitive datatype
        ii)derived datatype
        iii)user defined-datatype
    4)there are two types of array:
        i)single dimensional
        ii)multi-dimensional
    5)Array is also known as indexed variables or subscripted variables
*/
#include<stdio.h>
int main()
{
    //arr is one dimensional array which contains five elements
    //each element is of type integer
    //arr[]; //error:while predicate the array we have to specify size of that array at compile time 
    int arr[5];
    //accessing array
    for(int icnt=0;icnt<5;icnt++)
        printf("%d\n",arr[icnt]);
    return 0;
}