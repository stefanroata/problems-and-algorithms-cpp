#include <iostream>

using namespace std;

int v[100001];

int main()
{
    int n,t,k,i,j,ok,nr=0;
    cin>>n>>t>>k;
    for(i=1;i<=n;i++)
        cin>>v[i];
    for(i=1;i+k-1<=n;i++)
    {
        ok=1;
        for(j=i;j<=i+k-1;j++)
        {
            if(v[j]>t)
            {
                ok=0;
                break;
            }
        }
        if(ok)
            nr++;
    }
    cout<<nr;
    return 0;
}
