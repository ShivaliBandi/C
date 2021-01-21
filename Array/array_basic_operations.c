
#include<stdio.h>
int main()
{
    
    int arr[5];
    arr[0]=10;
    arr[1]=20;
    arr[2]=30;
    arr[3]=40;
    arr[4]=50;
    
   printf("sizeof(arr)->%d\n",sizeof(arr));//7
   /*
          |           |           |           |            |              |
   arr--->|    10     |     20    |    30     |     40     |      50      |
          |           |           |           |            |              |
         100           104        108          112         114            116          
     considered address
    */
   printf("%d\n",arr);//100
   printf("%d\n",&arr);//100
   printf("%d\n",arr+1);//104
   printf("%d\n",&(arr+1));//104


   printf("%d\n",&arr+1);//for the compiler base address of array is only one thing by using which we can access all elements of array
   //soo when we say &arr+1 is means that it will skip entire arr and then give next address
   //printf("%d",arr++);-->error base address of arrat is constant
    return 0;
}