#include <iostream>
#include <algorithm>
using namespace std;

int v[2501];

int main()
{
    int n,i,minim,c;
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>v[i];
    sort(v+1,v+n+1);
    minim=v[1];
    for(i=2;i<=n;i++)
        v[i]-=minim;
    c=__gcd(v[2],v[3]);
    if(c==0||c==1)
    {
        cout<<"NU";
        return 0;
    }
    for(i=4;i<=n;i++)
    {
        if(c==1||c==0)
        {
            cout<<"NU";
            return 0;
        }
        c=__gcd(c,v[i]);
    }
    cout<<"DA";
    return 0;
}
