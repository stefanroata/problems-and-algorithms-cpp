#include <iostream>

using namespace std;

int a[101][101],v[1000001];

int main()
{
    int n,m,i,j,maxim=-1;
    cin>>n>>m;
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
        cin>>a[i][j];
    for(j=1;j<=m;j++)
    {
        v[a[1][j]]++;
        v[a[n][j]]++;
        if(a[1][j]>maxim)
            maxim=a[1][j];
        if(a[n][j]>maxim)
            maxim=a[n][j];
    }
    for(i=1;i<=n;i++)
    {
        v[a[i][1]]++;
        v[a[i][m]]++;
        if(a[i][1]>maxim)
            maxim=a[i][1];
        if(a[i][m]>maxim)
            maxim=a[i][m];
    }
    for(i=0;i<=maxim;i++)
    {
        if(v[i]>0)
            cout<<i<<" ";
    }
    return 0;
}
