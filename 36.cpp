// take area of rectangular from user and make this rectangular into cylinder
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int hight,base,area;
    double radius;
    cout<<" Enter the hight of rectangular :\n";
    cin>>hight;
    cout<<" Enter the base of rectangular :\n";
    cin>>base;
    area=hight*base;
    radius=area/(3.14*hight);
    cout<< " radius squar of cylinder :"<<radius;
    return 0;
}