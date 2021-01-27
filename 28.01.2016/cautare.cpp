#include <iostream>

using namespace std;

int v[1001],w[1001];

int main()
{
    int n,m,i,j,ok;
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>v[i];
    cin>>m;
    for(i=1;i<=m;i++)
        cin>>w[i];
    for(i=1;i<=m;i++)
    {
        ok=0;
        for(j=1;j<=n;j++)
            if(w[i]==v[j])
            {
                ok=1;
                break;
            }
        cout<<ok<<" ";
    }
    return 0;
}
