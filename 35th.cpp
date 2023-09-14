// take from user any number and check this number even or odd:
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cout<<" Enter the any positive number: \n";
    cin>>num;
    if(num%2==0) //checking 
    {
        cout<<" This is even number :";
    }
    else
    {
        cout<<" This is odd number :";
    }
    return 0;
}