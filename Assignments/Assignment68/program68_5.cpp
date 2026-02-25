//  Description :recursive program which display below pattern.
//  Output : a       b       c       d       e       f

#include<iostream>
using namespace std;

void Display()
{
    char ch = 'a';

    while(ch <= 'f')
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