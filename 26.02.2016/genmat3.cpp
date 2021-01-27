#include <iostream>

using namespace std;

int a[101][101];

int main()
{
    int n,m,i,j,t=1;
    cin>>n>>m;
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
    {
        a[i][j]=t*t;
        t+=2;
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
            cout<<a[i][j]<<" ";
        cout<<'\n';
    }
    return 0;
}
