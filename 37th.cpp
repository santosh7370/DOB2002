#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"Enter the number of same patter : \n";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}