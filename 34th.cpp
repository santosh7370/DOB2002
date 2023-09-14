// digit from user and divider number from user and find remainder value
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int divider,digit,remainder;
    cout<<" Enter the three digit of number: \n";
    cin>>digit;
    cout<<" Enter the divider number :\n";
    cin>>divider;
    remainder=(digit)%divider;
    cout<<" Remainder value :"<<remainder;
    return 0;
}