#include <iostream>

using namespace std;

int a[101][101];

int main()
{
    int n,i,j,t=2;
    cin>>n;
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
    {
        a[i][j]=t;
        t+=2;
        if(t%3==0)
            t+=2;
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
            cout<<a[i][j]<<" ";
        cout<<'\n';
    }
    return 0;
}
