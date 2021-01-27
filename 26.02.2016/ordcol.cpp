#include <iostream>

using namespace std;

int a[101][101];

int main()
{
    int n,m,i,j,ok;
    cin>>n>>m;
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
        cin>>a[i][j];
    do
    {
        ok=0;
        for(j=1;j<=m-1;j++)
        {
            if(a[1][j]>a[1][j+1])
            {
                ok=1;
                for(i=1;i<=n;i++)
                    swap(a[i][j],a[i][j+1]);
            }
        }
    }while(ok);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        cout<<a[i][j]<<" ";
        cout<<'\n';
    }
    return 0;
}
