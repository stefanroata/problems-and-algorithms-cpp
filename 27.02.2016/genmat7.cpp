#include <iostream>

using namespace std;

int a[101][101];

int main()
{
    int n,i,j,j1,j2,k,i1,i2;
    cin>>n;
    for(i=1;i<=n;i++)
        a[i][i]=0;
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
    {
        if(i+j==n+1)
            a[i][j]=0;
    }
    i=1;
    j1=2;
    j2=n-1;
    while(j1<=j2&&i<=n/2)
    {
        for(k=j1;k<=j2;k++)
            a[i][k]=1;
        i++;
        j1++;
        j2--;
    }
    j1=2;
    j2=n-1;
    i=n;
    while(j1<=j2&&i>=n/2)
    {
        for(k=j1;k<=j2;k++)
            a[i][k]=2;
        i--;
        j1++;
        j2--;
    }
    j=1;
    i1=2;
    i2=n-1;
    while(i1<=i2&&j<=n/2)
    {
        for(k=i1;k<=i2;k++)
            a[k][j]=3;
        j++;
        i1++;
        i2--;
    }
    i1=2;
    i2=n-1;
    j=n;
    while(i1<=i2&&j>=n/2)
    {
        for(k=i1;k<=i2;k++)
            a[k][j]=3;
        j--;
        i1++;
        i2--;
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
            cout<<a[i][j]<<" ";
        cout<<'\n';
    }
    return 0;
}
