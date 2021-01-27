#include <iostream>
#include <algorithm>

using namespace std;

long long v[20],a[20];

int main()
{
    long long n,i,x,nr,ok,j;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>v[i];
    }
    for(i=1;i<=n;i++)
    {
        nr=1;
        x=v[i];
        do
        {
            a[nr++]=x%10;
            x/=10;
        }while(x);
        reverse(a+1,a+nr);
        nr--;
        if(nr%2==1)
        {
            ok=1;
            for(j=1;j<=nr/2&&ok;j++)
            {
                if(a[j]>=a[j+1])
                    ok=0;
            }
            if(ok)
            {
                for(j=nr/2+1;j<=nr-1&&ok;j++)
                    if(a[j]<=a[j+1])
                    ok=0;
            }
            cout<<ok<<'\n';
        }
        else
        {
            ok=1;
            for(j=1;j<nr/2&&ok;j++)
                if(a[j]>=a[j+1])
                ok=0;
            if(ok)
            {
                for(j=nr/2;j<=nr-1&&ok;j++)
                    if(a[j]<=a[j+1])
                    ok=0;
            }
            cout<<ok<<'\n';
        }
        for(j=1;j<=11;j++)
            a[j]=0;
    }
    return 0;
}
