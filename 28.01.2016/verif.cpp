#include <iostream>

using namespace std;

int v[501];

int main()
{
    int n,i,ok=1,m,j;
    cin>>m;
    for(j=1;j<=m;j++)
    {
        cin>>n;
        for(i=1;i<=n;i++)
        cin>>v[i];

    ok=1;
    for(i=1;i<=n-1;i++)
    {
        if(v[i]>v[i+1])
        {
            ok=0;
            break;
        }
    }
    cout<<ok<<" ";
    }
    return 0;
}
