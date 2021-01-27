#include <iostream>
#include <cmath>

using namespace std;

int v[1001];

int main()
{
    int n,i,d,poz1,poz2,dmax=10000;
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>v[i];
    for(i=1;i<=n;i++)
    {
        if(i!=n)
        {
            d=abs(v[i]-v[i+1]);
            if(d<=dmax)
            {
                dmax=d;
                poz1=i;
                poz2=i+1;
            }
        }
        else
        {
            d=abs(v[1]-v[n]);
            if(d<=dmax)
            {
                dmax=d;
                poz1=1;
                poz2=n;
            }
        }
    }
    cout<<poz1<<" "<<poz2;
    return 0;
}
