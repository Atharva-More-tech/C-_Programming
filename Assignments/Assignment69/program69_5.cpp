//  Description:    recursive program which display below pattern.
//  Input :     6
//  Output :   A       B       C       D       E        F  

#include<iostream>
using namespace std;

void Display(int iNo)
{   
    int i = 1;
    char ch = 'a';

    while(i <= iNo)
    {
        cout<<ch<<"\t";
        ch++;
        i++;
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