/* Take the age from the user and then decide accordingly
1. If age<18.
print-> not eligible for job
2. If age>=18.
print-> eligible for job.
3. If age>=55 and age<=60.
print-> eligible for job but retirement soon.
4. IF age > 60.
print-> retirement time.
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int age;
    cout<<" Enter the your age :\n";
    cin>>age;
    if(age<18)
    {
        cout<<" You are not eligible for job:";
    }
    else if(age<=55)
    {
        cout<<" You are eligible for job:";
    }
    else if(age<=60)
    {
        cout<<" You are eligible for job but retirement soon:";
    }
    else if(age>60)
    {
        cout<<" You have retirement time:";
    }
    return 0;
}