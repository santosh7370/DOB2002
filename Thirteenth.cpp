/* A school has following rules for grading sysgem
a. Below 25 - F
b. 25 to 44 - E
c. 45 to 49 - D
d. 50 to 59 - C
e. 60 to 79 - B
f. 80 t0 100 - A
Ask user to enter marks and print the corresponding grade.
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int mark;
    cout<<" Enter the your mark \n";
    cin>>mark;
    if(mark<25)
    {
        cout<<"your grade is F :";
    }
    else if(mark <=44)
    {
        cout<<"your grade is E :";
    }
    else if(mark <=49)
    {
        cout<<"your grade is D :";
    }
    else if(mark<=59)
    {
        cout<<"your grade is C :";
    }
    else if(mark<=79)
    {
        cout<<"your grade is B :";
    }
    else if(mark<=100)
    {
        cout<<"your grade is A :";
    }
    return 0;
}