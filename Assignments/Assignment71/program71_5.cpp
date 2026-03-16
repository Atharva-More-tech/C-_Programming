// Description :recursive program which accept number from user and return its reverse number.

#include<iostream>
#include<stdio.h>

using namespace std;

int Reverse(int iNo)
{
    int iDigit = 0;
    int iRev = 0;
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iRev = iRev * 10 + iDigit;
        iNo = iNo / 10;
    }
    return iRev;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the numbers : \n");
    scanf("%d",&iValue);

    iRet = Reverse(iValue);
    printf("Reverse numbers are : %d\n",iRet);
    
    return 0;
}