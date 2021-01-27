#include <iostream>

using namespace std;

int a[101][101],v[1000001];

int main()
{
    int n,m,i,j,maxim=-1,maxx=-1;
    cin>>n>>m;
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
    {
        cin>>a[i][j];
        v[a[i][j]]++;
        if(a[i][j]>maxx)
            maxx=a[i][j];
    }
    for(i=0;i<=maxx;i++)
    {
        if(v[i]>maxim)
            maxim=v[i];
    }
    for(i=0;i<=maxx;i++)
    {
        if(v[i]==maxim)
            cout<<i<<" ";
    }
    return 0;
}
