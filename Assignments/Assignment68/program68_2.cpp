//  Description :recursive program which display below pattern.
//  Output : 1       2       3       4       5

#include<iostream>
using namespace std;

void Display()
{
    int i = 0;

    i = 1;
    while(i <= 5)
    {
        cout<<i<<"\t";
        i++;
    }

}
int main()
{
    Display();
    
    return 0;
}