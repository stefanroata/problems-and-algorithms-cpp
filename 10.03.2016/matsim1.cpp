#include <iostream>

using namespace std;

int a[101][101],b[101][101];

int main()
{
    int n,i,j;
    cin>>n;
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
        cin>>a[i][j];
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
            b[i][j]=a[n-j+1][n-i+1];
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
            cout<<b[i][j]<<" ";
        cout<<'\n';
    }
    return 0;
}
