#include <iostream>
#include <algorithm>

using namespace std;

int v1[101],v2[101];

int main()
{
    int n,c,i,ok,t;
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>v1[i];
    for(i=1;i<=n;i++)
        cin>>v2[i];
    sort(v1+1,v1+n+1);
    sort(v2+1,v2+n+1);
    c=__gcd(v1[1],v2[1]);
    v1[1]/=c;
    v2[1]/=c;
    ok=1;
    for(i=2;i<=n&&ok;i++)
    {
        t=__gcd(v1[i],v2[i]);
        v1[i]/=t;
        v2[i]/=t;
        if(v1[i]!=v1[1]||v2[i]!=v2[1])
            ok=0;
    }
    if(ok)
        cout<<"DA";
    else
        cout<<"NU";
    return 0;
}
