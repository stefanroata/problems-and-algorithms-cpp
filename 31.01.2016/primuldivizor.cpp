#include <iostream>

using namespace std;

int main()
{
    long long n,i,x,d,s=0,dmax;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>x;
        d=2;
        dmax=-1;
        while(x!=1)
        {
            if(d*d>x)
                d=x;
            while(x%d==0)
            {
                if(d>dmax)
                    dmax=d;
                x/=d;
            }
            d++;
        }
        s+=dmax;
    }
    cout<<s;
    return 0;
}
