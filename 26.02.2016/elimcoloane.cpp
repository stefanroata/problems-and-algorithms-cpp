#include <iostream>

using namespace std;

int a[101][101];

int main()
{
    int n,m,i,j,ok;
    cin>>n>>m;
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
        cin>>a[i][j];
    for(j=1;j<=m;j++)
    {
        ok=0;
        for(i=1;i<=n&&ok==0;i++)
            if(a[i][j]==0)
            ok=1;
        if(ok)
        {
            for(i=1;i<=n;i++)
                a[i][j]=-1;
        }
    }
    for(i=1;i<=n;i++)
        {
            for(j=1;j<=m;j++)
    {
        if(a[i][j]!=-1)
            cout<<a[i][j]<<" ";
    }
    cout<<'\n';
        }
    return 0;
}
