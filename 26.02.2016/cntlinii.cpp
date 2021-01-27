#include <iostream>

using namespace std;

int a[101][101];

int main()
{
    int n,m,i,j,nr=0;
    cin>>n>>m;
    for(i=1; i<=n; i++)
        for(j=1; j<=m; j++)
            cin>>a[i][j];
    for(i=1; i<=n; i++)
    {
        j=1;
        while(a[i][j]==a[i][j+1]&&j+1<=m)
            j++;
        if(j==m)
            nr++;
    }
    cout<<nr;
    return 0;
}
