// Description : recursive program which accept string from user and count white spaces.

#include<iostream>
#include<stdio.h>

using namespace std;

int WhiteSpace(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ' ')
        {
            iCount++;
        }
        str++;
    }
    return iCount;
}

int main()
{
    char Arr[50] = {'\0'};
    int iRet = 0;

    printf("Enter the String : \n");
    scanf("%[^'\n']s",Arr);

    iRet = WhiteSpace(Arr);
    printf("Number of white spaces : %d",iRet);


    return 0;
}