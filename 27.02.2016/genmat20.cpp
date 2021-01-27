#include <iostream>

using namespace std;

int v[20];

int main()
{
    int i,j,n;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cout<<i<<" ";
        v[i]=i;
    }
    cout<<'\n';
    for(j=1;j<=n-1;j++)
    {
        v[n+1]=v[1];
        for(i=1;i<=n;i++)
            v[i]=v[i+1];
        for(i=1;i<=n;i++)
            cout<<v[i]<<" ";
        cout<<'\n';
    }
    return 0;
}
