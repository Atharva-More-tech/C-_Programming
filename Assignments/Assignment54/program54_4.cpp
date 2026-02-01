// Description : generic program to reverse an array.

#include<iostream>
using namespace std;

template <class T>
void Reverse(T *arr, int iSize)
{
    int start = 0;
    int end = iSize -1;

    while(start < end)
    {
       T temp = arr[start];
       arr[start] = arr[end];
       arr[end] = temp;

       start++;
       end--;
    }
}
int main()
{
    int arr[] ={11,20,30,9,50};
    int iRet = 0;

    Reverse(arr,5);

    cout<<"Array in reverse :\n";
    for(int i = 0; i < 5; i++)
    {
        cout<<arr[i] <<"\t";
    }

    return 0;
}