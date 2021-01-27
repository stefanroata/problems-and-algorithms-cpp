#include <iostream>

using namespace std;

int a[101][101];

int main()
{
    int n,m,i,j;
    cin>>n>>m;
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
        cin>>a[i][j];
    for(j=1;j<=m;j++)
        a[n-1][j]=-1;
    for(i=1;i<=n;i++)
        a[i][m-1]=-1;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            if(a[i][j]!=-1)
                cout<<a[i][j]<<" ";
        }
        if(i!=n-1)
            cout<<'\n';
    }
    return 0;
}
