#include <iostream>

using namespace std;

int a[101][101];

bool prim(int x)
{
    int i;
    if(x<2)
        return false;
    if(x==2)
        return true;
    if(x%2==0)
        return false;
    for(i=3;i*i<=x;i+=2)
        if(x%i==0)
        return false;
    return true;
}

int main()
{
    int n,m,i,j;
    cin>>n>>m;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
            cin>>a[i][j];
    }
      for(i=1;i<=n;i++)
    {
        if(!prim(a[i][1]))
        {for(j=1;j<=m;j++)
            cout<<a[i][j]<<" ";
        cout<<'\n';
        }
    }
}
