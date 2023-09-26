#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"Enter the number of pattern :\n";
    cin>>n;
    for( i=0;i<n;i++)
    {
        //space
        for(j=0;j<n-1-i;j++)// n-1-i or n-i-1 both are same
        {
            cout<<" ";
        }
        //star
        for(j=0;j<2*i+1;j++)
        {
            cout<<"*";
        }
        //space
        for(j=0;j<n-i-1;j++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}