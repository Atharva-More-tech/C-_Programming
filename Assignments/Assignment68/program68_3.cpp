//  Description :recursive program which display below pattern.
//  Output : 5       4       3       2       1

#include<iostream>
using namespace std;

void Display()
{
    int i = 0;

    i = 5;
    while(i >= 1)
    {
        cout<<i<<"\t";
        i--;
    }

}
int main()
{
    Display();
    
    return 0;
}