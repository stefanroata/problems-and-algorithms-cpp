#include <iostream>

using namespace std;

int a[101][1001];

int main()
{
    int m,n,i,j,maxim=-1,nr=0;
    cin>>m>>n;
    for(i=1;i<=m;i++)
        for(j=1;j<=n;j++)
        {
        cin>>a[i][j];
        if(a[i][j]>maxim)
            maxim=a[i][j];
        }
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(a[i][j]==maxim)
            {
                nr++;
                break;
            }
        }
    }
    cout<<maxim<<" "<<nr;
    return 0;
}
