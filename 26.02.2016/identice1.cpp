#include <iostream>

using namespace std;

int a[101][101];

int main()
{
    int n,m,i,j,nr=0,k;
    cin>>n>>m;
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
        cin>>a[i][j];
    for(i=1;i<=n-1;i++)
    {
        for(k=i+1;k<=n;k++)
        {
            j=1;
        while(a[i][j]==a[k][j]&&j<=m)
            j++;
        if(j==m+1)
            nr++;
        }
    }
    cout<<nr;
    return 0;
}
