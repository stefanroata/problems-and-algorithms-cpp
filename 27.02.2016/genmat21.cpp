#include <iostream>

using namespace std;

int a[101][101];

int main()
{
    int n,i,j,k,t,e;
    cin>>n;
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
        if(i+j==n+1)
        a[i][j]=n;
    for(i=1;i<=n-1;i++)
        for(j=1;j<=n-i;j++)
        a[i][j]=j+i-1;
    k=1;
    e=2;
    for(i=n;i>=2;i--)
    {
        t=n-k;
        for(j=n;j>=e;j--)
            a[i][j]=n-t,t--;
        k++;
        e++;
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
            cout<<a[i][j]<<" ";
        cout<<'\n';
    }
    return 0;
}
