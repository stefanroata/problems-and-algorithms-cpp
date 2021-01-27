#include <iostream>

using namespace std;

int a[105][105];

int main()
{
    int n,i,j,ok,nr=0;
    cin>>n;
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
        cin>>a[i][j];
    for(j=0;j<=n+1;j++)
        a[0][j]=a[n+1][j]=-1;
    for(i=0;i<=n+1;i++)
        a[i][0]=a[i][n+1]=-1;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            ok=1;
            if(a[i][j]<=a[i-1][j]||a[i][j]<=a[i+1][j]||a[i][j]<=a[i][j+1]||a[i][j]<=a[i][j-1])
                ok=0;
            if(ok)
                nr++;
        }
    }
    cout<<nr;
    return 0;
}
