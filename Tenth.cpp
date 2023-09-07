// find Maximum of 3 number
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter the first number:\n";
    cin>>a;
    cout<<"Enter the second number:\n";
    cin>>b;
    cout<<"Enter the third number:\n";
    cin>>c;
    if(a>b && a>c)
    {
        cout<<" Maximum number of First: "<<a;
    }
    else if(b>c && b>a)
    {
        cout<<" Maximum number of second: "<<b;
    }
    else
    {
        cout<<" Maximum number of Third: "<<c;
    }
    return 0;
}