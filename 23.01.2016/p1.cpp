#include <iostream>
#include <algorithm>

using namespace std;

int v[201];

int main()
{
    int n,i,j,nr=0;
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>v[i];
    for(i=1;i<n;i++)
    {
        for(j=i+1;j<=n;j++)
            if(__gcd(v[i],v[j])==1)
            nr++;
    }
    cout<<nr;
    return 0;
}
