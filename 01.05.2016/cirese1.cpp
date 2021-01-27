#include <iostream>

using namespace std;

int a[1001][1001],s[1001][1001];

int main()
{
    int n,m,i,j,k,l,i1,j1,i2,j2,suma,maxim=0;
    cin>>n>>m>>k;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            cin>>a[i][j];
            s[i][j]=s[i][j-1]+a[i][j];
        }
    }
    for(i=1;i<=k;i++)
    {
        cin>>i1>>j1>>i2>>j2;
        suma=0;
        for(l=i1;l<=i2;l++)
            suma+=(s[l][j2]-s[l][j1-1]);
        if(suma>maxim)
            maxim=suma;
    }
    cout<<maxim;
    return 0;
}
