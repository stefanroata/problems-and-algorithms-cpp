#include <iostream>

using namespace std;

int a[1005],b[1005];

int main()
{
    int t,u,i,s,n,m,ok,r;
    cin>>t;
    for(u=1;u<=t;u++)
    {
        cin>>n;
        for(i=1;i<=n;i++)
            cin>>a[i];
        cin>>m;
        for(i=1;i<=m;i++)
            cin>>b[i];
        ok=1;
        s=0;
        r=1;
        for(i=1;i<=n;i++)
        {
            s+=a[i];
            if(r>m)
            {
                ok=0;
                break;
            }
            if(s<b[r])
                continue;
            if(s==b[r])
            {
                r++;
                s=0;
            }
            if(s>b[r])
            {
                ok=0;
                break;
            }
        }
        if(r-1!=m)
            ok=0;
        cout<<ok<<'\n';
    }
    return 0;
}
