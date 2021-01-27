#include <iostream>
#include <algorithm>

using namespace std;

int v[1001];

long long sd(int x)
{
    long long s=0;
    int i;
    for(i=1;i*i<x;i++)
        if(x%i==0)
        s+=i+x/i;
    if(i*i==x)
        s+=i;
    return s;
}

bool comp(int x,int y)
{
    if(sd(x)<sd(y))
        return 1;
    else
    if(sd(x)==sd(y))
    {
        if(x<y)
            return 1;
        else
            return 0;
    }
    return 0;
}

int main()
{
    int n,i;
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>v[i];
    sort(v+1,v+n+1,comp);
    for(i=1;i<=n;i++)
        cout<<v[i]<<" ";
    return 0;
}
