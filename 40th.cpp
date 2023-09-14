#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,x;
    cout<<"Enter the number of same patter : \n";
    cin>>x;
    for(i=0;i<=x;i++)
    {
        for(j=1;j<=x-i;j++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}