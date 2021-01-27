#include <iostream>

using namespace std;

int v[1001];

int main()
{
    int n,i,d,c,h,s=0,r;
    cin>>n>>h;
    for(i=1;i<=n;i++)
        cin>>v[i];
    for(i=n-1;i>=1;i--)
    {
        if(v[i]<v[i+1])
        {
        d=v[i+1]-v[i];
        c=d/h;
        r=d%h;
        if(r!=0)
        c++;
        v[i]+=c*h;
        s+=c;
        }
    }
    cout<<s;
    return 0;
}
