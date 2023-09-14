// number pattern 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,n;
    cout<<"Enter the number of number term : \n";
    cin>>n;
    for(a=1;a<=n;a++)
    {
        for(b=1;b<=a;b++)
        {
            cout<<b<<" ";
        }
        cout<<endl;
    }
    return 0;
}