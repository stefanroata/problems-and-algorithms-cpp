#include <iostream>

using namespace std;

int a[101][101];

int main()
{
    int n,m,i,j,minim=10001,ok;
    cin>>n>>m;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            cin>>a[i][j];
            if(a[i][j]<minim)
                minim=a[i][j];
        }
    }
    for(j=1;j<=m;j++)
    {
        ok=0;
        for(i=1;i<=n&&ok==0;i++)
            if(a[i][j]==minim)
            ok=1;
        if(ok)
        {
            for(i=1;i<=n;i++)
                a[i][j]=minim;
        }
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
            cout<<a[i][j]<<" ";
        cout<<'\n';
    }
    return 0;
}
