#include <iostream>

using namespace std;


int a[101][101];

int main()
{
    int n,m,k,i,j,i1,j1,i2,j2,s,smax=-1,t;
    cin>>n>>m>>k;
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
        cin>>a[i][j];
    for(t=1;t<=k;t++)
    {
        cin>>i1>>j1>>i2>>j2;
        s=0;
        for(i=i1;i<=i2;i++)
            for(j=j1;j<=j2;j++)
            s+=a[i][j];
        if(s>smax)
            smax=s;
    }
    cout<<smax;
    return 0;
}
