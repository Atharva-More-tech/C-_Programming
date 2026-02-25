//  Description:    recursive program which display below pattern.
//  Input :     5
//  Output :   1       2       3       4       5  

#include<iostream>
using namespace std;

void Display(int iNo)
{   
    int i = 0;

    i = iNo;
    while(i >= 1)
    {
        cout<<i<<"\t";
        i--;
    }
}

int main()
{
    int iValue = 0;

    cout<<"Enter the number :";
    cin>>iValue;

    Display(iValue);

    return 0;
}