//  Description :recursive program which display below pattern.
//  Output : *       *       *       *       *

#include<iostream>
using namespace std;

void Display()
{
    int i = 0;

    i = 1;
    while(i <= 5)
    {
        cout<<"*\t";
        i++;
    }

}
int main()
{
    Display();
    
    return 0;
}