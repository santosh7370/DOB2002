// write a C++ program that take input a age and if you are an adult or not
# include<bits/stdc++.h>
using namespace std;
int main()
{
    int age;
    cout<<" Enter the your age:\n";
    cin>>age;
    if(age>=18)
    {
        cout<<"You are an adult:";
    }
    else
    {
        cout<<"You are not an adult:";
    }
    return 0;
} 
