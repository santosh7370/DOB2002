#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"Enter the number of term :\n";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=0;j<=n-i;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}