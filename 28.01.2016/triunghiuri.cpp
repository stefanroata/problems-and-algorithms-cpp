#include <iostream>

using namespace std;

int v[101];

int main()
{
    int n,i,j,k,nr=0;
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>v[i];
    for(i=1;i<=n-2;i++)
        for(j=i+1;j<=n-1;j++)
        for(k=j+1;k<=n;k++)
        if(v[i]+v[j]>v[k]&&v[j]+v[k]>v[i]&&v[i]+v[k]>v[j]) nr++;
    cout<<nr;
    return 0;
}
