// Description : recursive program which accept number from user and return smallest digit

#include<iostream>
#include<stdio.h>

using namespace std;

int Min(int iNo)
{
    int iMin = iNo % 10;
    int iDigite = 0;

    while(iNo != 0)
    {
        iDigite = iNo % 10;

        if(iDigite < iMin)
        {
            iMin = iDigite; 
        }
    iNo = iNo / 10;
    }
    return iMin;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the numbers : \n");
    scanf("%d",&iValue);

    iRet = Min(iValue);
    printf("Smaller number is : %d\n" ,iRet);
    
    return 0;
}