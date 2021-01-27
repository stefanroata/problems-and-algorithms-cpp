#include <iostream>
using namespace std;

int a[101][101],v[10001];

int main()
{
    int n,m,i,j,maxx=-1,s=0;
    cin>>n>>m;
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
    {
        cin>>a[i][j];
        if(a[i][j]%2==0)
        {
            v[a[i][j]]++;
            if(a[i][j]>maxx)
                maxx=a[i][j];
        }
    }
    for(i=0;i<=maxx;i+=2)
    {
        if(v[i])
            s+=i;
    }
    cout<<s;
    return 0;
}
