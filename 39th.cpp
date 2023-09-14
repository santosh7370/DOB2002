#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,x;
    cout<<"Enter the number of term :\n";
    cin>>x;
    for(i=0;i<=x;i++)
    {
        for(j=1;j<=x-i;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}