// Description : generic program to find smallest element from an array.

#include<iostream>
using namespace std;

template <class T>
T Min(T *arr, int iSize)
{
    int i = 0;
    int iMin = arr[0];

    for(i = 0; i < iSize; i++)
    {
       if(arr[i] < iMin)
       {
        iMin = arr[i];
       }
    }
    return iMin;
}
int main()
{
    int arr[] ={11,20,30,9,50};
    int iRet = 0;

    iRet = Min(arr,5);

    cout<<"Smallest Number is : "<<iRet;

    return 0;
}