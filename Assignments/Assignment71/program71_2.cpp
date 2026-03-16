// Description : recursive program which accept number from user and return largest digit

#include<iostream>
#include<stdio.h>

using namespace std;

int Max(int iNo)
{
    int iMax = 0;
    int iDigite = 0;

    while(iNo != 0)
    {
        iDigite = iNo % 10;

        if(iDigite > iMax)
        {
            iMax = iDigite; 
        }
    iNo = iNo / 10;
    }
    return iMax;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the numbers : \n");
    scanf("%d",&iValue);

    iRet = Max(iValue);
    printf("Largest number is : %d\n" ,iRet);

    return 0;
}