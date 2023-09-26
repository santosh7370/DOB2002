#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n;
    cout<<" Enter the number or pattern :\n";
    cin>>n;
     for( i=0;i<n;i++)
    {
        //space
        for(j=0;j<i;j++)        {
            cout<<" ";
        }
        //star
        for(j=0;j<2*n-(2*i+1);j++)
        {
            cout<<"*";
        }
        //space
        for(j=0;j<i;j++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}