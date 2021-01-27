#include <iostream>

using namespace std;

int a[101][101];

int main()
{
    int n,m,i,j,nr=0,ok;
    cin>>n>>m;
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
        cin>>a[i][j];
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
    {
        ok=1;
        if(a[i-1][j]%2==1||a[i+1][j]%2==1||a[i][j+1]%2==1||a[i][j-1]%2==1)
            ok=0;
        if(ok)
            nr++;
    }
    cout<<nr;
    return 0;
}
