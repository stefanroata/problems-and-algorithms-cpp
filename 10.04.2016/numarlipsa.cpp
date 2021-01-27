#include <iostream>
#include <algorithm>

using namespace std;

int v[102];

int main()
{
    int n,i,ok;
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>v[i];
    sort(v+1,v+n+1);
    if(v[1]==1)
    {
        ok=0;
    for(i=1;i<=n&&ok==0;i++)
    {
        if(v[i+1]-v[i]>1)
        {
            cout<<v[i]+1;
            ok=1;
        }
    }
    if(ok==0)
        cout<<v[n]+1;
    }
    else
        cout<<1;
    return 0;
}
