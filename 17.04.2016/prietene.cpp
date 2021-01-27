#include <iostream>

using namespace std;

int sum_div(int x)
{
    int i,s=0;
    for(i=1;i*i<x;i++)
        if(x%i==0)
    {
        s+=i;
        s+=(x/i);
    }
    if(i*i==x)
        s+=i;
    return s;
}

int main()
{
    int a,b,s1,s2;
    cin>>a>>b;
    s1=sum_div(a)-a;
    s2=sum_div(b)-b;
    if(a==s2&&b==s1)
        cout<<"PRIETENE";
    else
        cout<<"NU SUNT PRIETENE";
    return 0;
}
