#include <iostream>

using namespace std;

int v[1001];

int main()
{
    int x,i,j,n;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            cin>>x;
            if(i>j&&i+j<n+1)
                v[x]=1;
        }
    }
    for(i=1;i<=1000;i++)
        if(v[i])cout<<i<<" ";
    return 0;
}
