#include <iostream>
#include <algorithm>

using namespace std;

int v[1001],w[1001];

bool comp(int x,int y)
{
    if(x>y)
        return 1;
    return 0;
}

int main()
{
    int n,i,k=1;
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>v[i];
    for(i=1;i<=n-1;i++)
    {
        if(__gcd(v[i],v[n])==1)
            w[k++]=v[i];
    }
    k--;
    sort(w+1,w+k+1,comp);
    for(i=1;i<=k;i++)
        cout<<w[i]<<" ";
    return 0;

}
