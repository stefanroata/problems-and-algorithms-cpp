#include <iostream>

using namespace std;

int a[101][101];

int main()
{
    int n,m,i,j,minim=1000001,maxim=-1,linmax,colmax,linmin,colmin;
    cin>>n>>m;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            cin>>a[i][j];
            if(a[i][j]<minim)
            {
                minim=a[i][j];
                linmin=i;
                colmin=j;
            }
            if(a[i][j]>maxim)
            {
                maxim=a[i][j];
                linmax=i;
                colmax=j;
            }
        }
    }
    for(j=1;j<=m;j++)
        a[linmin][j]=a[linmax][j]=-1;
    for(i=1;i<=n;i++)
        a[i][colmin]=a[i][colmax]=-1;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            if(a[i][j]!=-1)
                cout<<a[i][j]<<" ";
        }
        if(i!=linmin&&i!=linmax)
        cout<<'\n';
    }
    return 0;
}
