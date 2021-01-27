#include <iostream>

using namespace std;

int main()
{
    long long n,k,r;
    cin>>n;
    k=n/792;
    r=n%792;
    if(r<=9)
        cout<<k+1<<" "<<r;
    else
        if(r<=189)
    {
        if((r-9)%2==1)
            cout<<"IMPOSIBIL";
        else
            cout<<k+1<<" "<<(r-9)/2+9;
    }
    else
        if((r-189)%3!=0)
            cout<<"IMPOSIBIL";
        else
            cout<<k+1<<" "<<(r-189)/3+99;
    return 0;
}
