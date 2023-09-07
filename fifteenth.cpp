/* Take the day no and print the corresponding day 
for 1 print monday
for 2 print tuesday and so on for 7 prind sunday 
using else if condition */
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int day;
    cout<<"Enter day number :\n";
    cin>>day;
    if(day==1)
    {
        cout<<"Monday";
    }
    else if(day==2)
    {
        cout<<"Tuesday";
    }
    else if(day==3)
    {
        cout<<"Wednesday";
    }
    else if(day==4)
    {
        cout<<"Thrusday";
    }
    else if(day==5)
    {
        cout<<"Friday";
    }
    else if(day==6)
    {
        cout<<"Saturday";
    }
    else if(day==7)
    {
        cout<<"Sunday";
    }
    else
    {
        cout<<" It is a default day number";
    }
    return 0;
}