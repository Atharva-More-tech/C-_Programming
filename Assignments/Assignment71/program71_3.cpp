// Description : recursive program which accept string from user and count number of small characters.

#include<iostream>
#include<stdio.h>

using namespace std;

int Small(char *str)
{
    int iCount = 0;

    while(*str != 0)
    {
        if(*str >= 'a' && *str <= 'z')
        {
            iCount++;
        }
        str++;
    }
    return iCount;
}

int main()
{
    char Arr [50] = {'\0'};
    int iRet = 0;

    printf("Enter the string : \n");
    scanf("%[^'\n']s",Arr);

    iRet = Small(Arr);
    printf("number of smaller charecters are  : %d\n" ,iRet);
    
    return 0;
}