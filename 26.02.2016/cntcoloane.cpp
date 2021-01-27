#include <iostream>

using namespace std;

int a[101][101];

int main()
{
    int n,m,i,j,nr=0,ok,k;
    cin>>n>>m;
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
        cin>>a[i][j];
    for(j=1;j<=m;j++)
    {
        i=1;
        ok=1;
        while(i+1<=n)
        {
            for(k=i+1;k<=n&&ok;k++)
            {
                if(a[i][j]==a[k][j])
                    ok=0;
            }
            if(ok==0)
                break;
            i++;
        }
        if(ok)
            nr++;
    }
    cout<<nr;
    return 0;
}
