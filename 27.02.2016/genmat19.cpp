#include <iostream>

using namespace std;

int a[101][101];

int main()
{
    int n,i,j;
    cin>>n;
    for(i=1;i<=n;i++)
        a[i][1]=1;
    for(j=1;j<=n;j++)
        a[n][j]=j;
    for(i=n-1;i>=1;i--)
    {
        for(j=2;j<=n;j++)
            a[i][j]=a[i][j-1]+a[i+1][j];
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
            cout<<a[i][j]<<" ";
        cout<<'\n';
    }
    return 0;
}
