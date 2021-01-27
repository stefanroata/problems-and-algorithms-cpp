#include <iostream>
#include <algorithm>
using namespace std;

int v[1001],a[1001][1001];

int main()
{
    int n,i,k,nr=0,j;
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>v[i];
    sort(v+1,v+n+1);
    for(i=2;i<=n;i++)
    {
        k=1;
        for(j=i-1;j>=1;j--)
            a[i][k]=v[i]+v[j],k++;
    }
    for(i=2;i<=n;i++)
    {
        for(j=1;j<=i-1;j++)
        {
            for(k=1;k<=n;k++)
            {
                if(k>i)
                {
                if(a[i][j]>v[k])
                  nr++;
                if(a[i][j]<=v[k])
                    break;
                }
            }
        }
    }
    cout<<nr;
    return 0;
}
