/*
calculate the area of trangle take input 
Hight and base 
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int hight,base;
    double area;
    cout<<"Enter the hight of trangle :\n";
    cin>>hight;
    cout<<"Enter the base of trangle :\n";
    cin>>base;
    area = (hight*base)/2;
    cout<<"Area of trangle : = "<<area;
    return 0;
}