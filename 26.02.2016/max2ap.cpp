#include <iostream>

using namespace std;

int a[101][101],v[1000001];

int main()
{
    int n,m,i,j,maxim=-1,ok,maxx=-1;
    cin>>n>>m;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            cin>>a[i][j];
            v[a[i][j]]++;
            if(a[i][j]>maxx)
                maxx=a[i][j];
        }
    }
    ok=0;
    for(i=0;i<=maxx;i++)
    {
        if(v[i]>=2)
        {
            ok=1;
            maxim=i;
        }
    }
    if(ok==0)
        cout<<"IMPOSIBIL";
    else
        cout<<maxim;
    return 0;
}
