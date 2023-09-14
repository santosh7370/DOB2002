// calculate the avarage of player by run
//and totel run
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int pl1,pl2,pl3,pl4,pl5,avg;
    cout<<" Enter the run of player one : \n";
    cin>>pl1;
    cout<<" Enter the run of player two : \n";
    cin>>pl2;
    cout<<" Enter the run of player third : \n";
    cin>>pl3;
    cout<<" Enter the run of player four : \n";
    cin>>pl4;
    cout<<" Enter the run of player five: \n";
    cin>>pl5;
    int totel;
    totel=pl1+pl2+pl3+pl4+pl5;
    cout<<" Totel run by player:\n"<<totel;
    avg=(totel)/5;
    cout<<"Average run of player:"<<avg;
    return 0;
}