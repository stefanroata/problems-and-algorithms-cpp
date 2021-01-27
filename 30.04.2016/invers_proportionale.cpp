#include <iostream>
#include <algorithm>

using namespace std;

int v[101],w[101];

int main()
{
    int n,i;
    long long p1,p;
    bool ok;
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>v[i];
    for(i=1;i<=n;i++)
        cin>>w[i];
    sort(v+1,v+n+1);
    sort(w+1,w+n+1);
    reverse(w+1,w+n+1);
    p1=v[1]*w[1];
    ok=1;
    for(i=2;i<=n&&ok;i++)
    {
        p=v[i]*w[i];
        if(p!=p1)
            ok=0;
    }
    if(ok)
        cout<<"DA";
    else
        cout<<"NU";
    return 0;
}
