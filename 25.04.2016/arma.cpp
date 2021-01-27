#include <iostream>

using namespace std;

int a[101][101],v[1001];


int main()
{
    int n,m,k,i,x,l,c,poz,j;
    cin>>n>>m>>k;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
            cin>>a[i][j];
    }
    for(i=1;i<=k;i++)
    {
        cin>>x;
        if(x<1000)
            v[x]++;
    }
    for(i=1;i<=1000;i++)
    {
        if(v[i]>0)
        {
            for(l=1;l<=n;l++)
            {
                for(c=1;c<=m;c++)
                {
                    if(a[l][c]==i)
                        a[l][c]=0;
                }
            }
        }
    }
    for(c=1;c<=m;c++)
    {
        l=n;
        while(l>=1)
        {
            if(a[l][c]>0)
            {
                poz=l+1;

                while(a[poz][c]==0&&poz<=n)
                {
                    poz++;
                    if(poz==n+1&&a[poz-1][c]==0)
                    {
                        a[poz-1][c]=a[l][c];
                        a[l][c]=0;
                    }
                    else
                    if(a[poz][c]>0)
                    {
                        a[poz-1][c]=a[l][c];
                        a[l][c]=0;
                    }
                }
            }
            l--;
        }
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
            cout<<a[i][j]<<" ";
        cout<<'\n';
    }
    return 0;
}
