#include <iostream>

using namespace std;

int a[101][101];

int main()
{
    int n,m,i,j,t;
    cin>>n>>m;
    t=n*m;
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
    {
        a[i][j]=t;
        t--;
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
            cout<<a[i][j]<<" ";
        cout<<'\n';
    }
    return 0;
}
