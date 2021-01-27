#include <iostream>
#include <algorithm>

using namespace std;

int v[2000002];

bool comp(int x,int y)
{
    if(x>y)
        return 1;
    return 0;
}

int main()
{
    int n,i;
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>v[i];
    sort(v+1,v+n+1,comp);
    for(i=1;i<=n;i++)
        cout<<v[i]<<" ";
    cout<<'\n';
    for(i=1;i<=n;i++)
    {
        if(2*v[i]==v[i-1]+v[i+1])
            cout<<1<<" ";
        else
            cout<<0<<" ";
    }
    return 0;
}
