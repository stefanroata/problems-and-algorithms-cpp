#include <iostream>

using namespace std;

int a[101][101];

int main()
{
    int n,m,i,j,mini,minj,maxi,maxj,ok;
    cin>>n>>m;
    for(i=1;i<=n;i++)
    for(j=1;j<=m;j++)
    cin>>a[i][j];
    for(i=1;i<=n;i++)
    {
        ok=0;
        for(j=1;j<=m;j++)
        {
            if(a[i][j]==1)
            {
                ok=1;
                break;
            }
        }
        if(ok)
        {
            mini=i;
            break;
        }
    }

        for(i=1;i<=n;i++)
    {
        ok=0;
        for(j=1;j<=m;j++)
        {
            if(a[i][j]==1)
            {
                ok=1;
                break;
            }
        }
        if(ok)
            maxi=i;
    }

    for(i=1;i<=m;i++)
    {
        ok=0;
        for(j=1;j<=n;j++)
        {
            if(a[j][i]==1)
            {
                ok=1;
                break;
            }
        }
        if(ok)
        {
            minj=i;
            break;
        }
    }

        for(i=1;i<=m;i++)
    {
        ok=0;
        for(j=1;j<=n;j++)
        {
            if(a[j][i]==1)
            {
                ok=1;
                break;
            }
        }
        if(ok)
            maxj=i;
    }

    cout<<maxi-mini+1<<" "<<maxj-minj+1<<'\n';
    for(i=mini;i<=maxi;i++)
    {
        for(j=minj;j<=maxj;j++)
            cout<<a[i][j]<<" ";
        cout<<'\n';
    }
    return 0;
}
