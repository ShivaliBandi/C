#include<stdio.h>
int isUpper(char ch)
{
    if(ch>='A' && ch<='Z')
        return 1;
    else 
        return 0;
}
int main()
{
    
    char cletter;
    printf("enter a character:\n");
    scanf("%c",&cletter);
    if(isUpper(cletter)==1)
    printf("is uppercase\n");
    else
    printf("is lower case\n");
    return 0;

}
