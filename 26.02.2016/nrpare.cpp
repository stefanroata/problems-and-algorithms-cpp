#include <iostream>

using namespace std;

int a[101][101];

int main()
{
    int n,m,i,j,nr,nrmax=-1;
    cin>>n>>m;
    for(i=1;i<=n;i++)
    {
        nr=0;
        for(j=1;j<=m;j++)
    {
        cin>>a[i][j];
        if(a[i][j]%2==0)
            nr++;
    }
    if(nr>nrmax)
        nrmax=nr;
    }
    for(i=1;i<=n;i++)
    {
        nr=0;
        for(j=1;j<=m;j++)
            if(a[i][j]%2==0)
            nr++;
        if(nr==nrmax)
            cout<<i<<" ";
    }
    return 0;
}
