#include <iostream>

using namespace std;

int a[101],b[101];

int main()
{
    int n,m,i,j,nr=0,ok;
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>a[i];
    cin>>m;
    for(i=1;i<=m;i++)
        cin>>b[i];
    for(i=1;i<=n;i++)
    {
        ok=1;
        for(j=1;j<=m;j++)
        if(a[i]<=b[j])
        ok=0;
        if(ok)
            nr++;
    }
    cout<<nr;
    return 0;

}
