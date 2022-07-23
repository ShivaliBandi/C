#include<stdio.h>
// int no1=10;
// float * fun(int no)
// {
//     nno1=no+no1;
//     return &no1;
// }
int main()
{
    int no1=129;
    char *p=(char *)&no1;
   // printf("no:%d\tno1:%d\n",no,no1);
  //  int *p=NULL;
   // p=fun(no1);
    printf("%d\n",*(p));
    printf("%d\n",*(p+1));
    printf("%d\n",*(p+2));
    printf("%d\n",*(p+3));
    printf("%d\n",*(p+4));
    printf("%d\n",*(p+5));

    return 0;
}