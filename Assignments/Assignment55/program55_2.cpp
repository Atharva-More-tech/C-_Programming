// Description :generic program to perform subtraction of two numbers.

#include<iostream>
using namespace std;

template <class T>
T Sub(T no1, T no2)
{
    T iAns = 0;

    iAns = no1 - no2;

    return iAns;
}

int main()
{
    int iRet = Sub(10, 20);
    printf("%d\n", iRet);

    float fRet = Sub(10.5f, 20.3f);
    printf("%f\n", fRet);

    return 0;
}