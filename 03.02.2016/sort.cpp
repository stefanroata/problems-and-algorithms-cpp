#include <iostream>
#include <algorithm>

using namespace std;

int v[1001],v1[1001],v2[1001];

bool cmp(int x,int y){return (x>y);}

int main()
{
    int n,i,k=1,p=1,nr0=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>v[i];
        if(v[i]==0)
            nr0++;
        if(v[i]<0)
            v1[k++]=v[i];
        if(v[i]>0)
            v2[p++]=v[i];
    }
    k--;
    p--;
    sort(v1+1,v1+k+1,cmp);
    sort(v2+1,v2+p+1,cmp);
    for(i=1;i<=k;i++)
        cout<<v1[i]<<" ";
    for(i=1;i<=nr0;i++)
        cout<<0<<" ";
    for(i=1;i<=p;i++)
        cout<<v2[i]<<" ";
    return 0;
}
