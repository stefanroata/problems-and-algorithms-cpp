#include <iostream>

using namespace std;

int a[101][101];

int main()
{
    int n,k,i,j;
    cin>>n>>k;
    for(i=1;i<=k;i++)
        for(j=1;j<=k;j++)
        a[i][j]=1;
    for(i=1;i<=k;i++)
        for(j=k+1;j<=n;j++)
        a[i][j]=2;
    for(i=k+1;i<=n;i++)
        for(j=1;j<=k;j++)
        a[i][j]=3;
    for(i=k+1;i<=n;i++)
        for(j=k+1;j<=n;j++)
        a[i][j]=4;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
            cout<<a[i][j]<<" ";
        cout<<'\n';
    }
    return 0;
}
