#include <iostream>

using namespace std;

int main()
{
    int n,i,x,d,s=0,p,dmax=-1;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>x;
        d=2;
        while(x!=1)
        {
            p=0;
            if(d*d>x)
                d=x;
            while(x%d==0)
            {
                p++;
                x/=d;
            }
            if(p)
            {
                if(d>dmax)
                {
                    dmax=d;
                    s=p;
                }
                else
                    if(d==dmax)
                    s+=p;
            }
            d++;
        }
    }
    cout<<dmax<<" "<<s;
    return 0;
}
