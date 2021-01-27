#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    long long n,d=2,p,pmax=-1,nr;
    cin>>n;
    while(n!=1)
    {
        p=0;
        if(d*d>n)
            d=n;
        while(n%d==0)
        {
            p++;
            n/=d;
        }
        if(p&&p>pmax)
        {
            pmax=p;
            nr=d;
        }
        else
        if(p==pmax)
        {
            if(d>nr)
                nr=d;
        }
        d++;
    }
    cout<<nr;
    return 0;
}
