// Description : generic program to find sum of all odd elements.

#include<iostream>
using namespace std;

template <class T>
T SumOdd(T *arr, int iSize)
{
    int i = 0;
    T iSum = 0;

    for(i = 0; i < iSize; i++)
    {
        if(arr[i] % 2 != 0)
        {
            iSum = iSum + arr[i];
        }
    }
    return iSum;
}
int main()
{
    int arr[] ={11,20,30,9,50};
    int iRet = 0;

    iRet = SumOdd(arr,5);

    cout<<"Addition of sum of all odd number is :"<<iRet<<"\n";    //20

    return 0;
}