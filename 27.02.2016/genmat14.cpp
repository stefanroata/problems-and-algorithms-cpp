#include <iostream>

using namespace std;

int a[101][101];

int main()
{
    int n,i,j;
    cin>>n;
    for(j=1;j<=n;j++)
        a[n][j]=j;
    for(i=n-1;i>=1;i--)
    {
        for(j=1;j<=i;j++)
            a[i][j]=a[i+1][j]+a[i+1][j-1]+a[i+1][j+1];
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
            cout<<a[i][j]<<" ";
        cout<<'\n';
    }
    return 0;
}
