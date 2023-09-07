/* Take the day no and print the corresponding day 
for 1 print monday
for 2 print tuesday and so on for 7 prind sunday 
using switch statement */
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int day;
    cout<<"Enter the day number :\n";
    cin>>day;
    switch(day)
    {
        case 1:
            cout<<"Monday";
            break;
        case 2:
            cout<<"Tuesday";
            break;
        case 3:
            cout<<"Wednesday";
            break;
        case 4:
            cout<<"Thrusday";
            break;
        case 5:
            cout<<"Friday";
            break;
        case 6:
            cout<<"Saturday";
            break;
        case 7:
            cout<<"Sunday";
            break;
        default:
            cout<<"Invalid day number";
    }
    return 0;
}