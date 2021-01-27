#include <iostream>
#include <algorithm>

using namespace std;

int v[1001];

bool prim(int x)
{
    int i;
    if(x<2)
        return false;
    if(x==2)
        return true;
    if(x%2==0)
        return false;
    for(i=3;i*i<=x;i+=2)
        if(x%i==0)
        return false;
    return true;
}

int main()
{
    int n,i,k=1,x;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>x;
        if(prim(x))
            v[k++]=x;
    }
    k--;
    sort(v+1,v+k+1);
    for(i=1;i<=k;i++)
        cout<<v[i]<<" ";
    return 0;
}
