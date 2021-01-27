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
    for(j=1;j<=m;j++)
    {
        do
        {
            ok=0;
            for(i=1;i<=n-1;i++)
            {
                if(a[i][j]<a[i+1][j])
                {
                    swap(a[i][j],a[i+1][j]);
                    ok=1;
                }
            }
        }while(ok);
    }
    for(i=1;i<=n;i++)
        {
            for(j=1;j<=m;j++)
        cout<<a[i][j]<<" ";
        cout<<'\n';
        }
    return 0;
}
