//  Description :recursive program which display below pattern.
//  Output : A       B       C       D       E       F

#include<iostream>
using namespace std;

void Display()
{
    char ch = 'A';

    while(ch <= 'F')
    {
        cout<<ch<<"\t";
        ch++;
    }

}
int main()
{
    Display();
    
    return 0;
}