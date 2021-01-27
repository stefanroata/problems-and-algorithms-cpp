#include <fstream>
#include <iostream>
using namespace std;

ifstream f("easyquery.in");
ofstream g("easyquery.out");

long long v[100005],w[100005],s[100005];

int main()
{
    int n,i,q,ss,d,p,k;
    long long r;
    f>>n;
    for(i=1;i<=n;i++)
        f>>w[i];
    f>>k;
    for(i=1;i<=k;i++)
    {
        f>>q;
        f>>ss>>d>>p;
        if(q==1)
        {
            v[ss]+=(long long)p;
            v[d+1]-=(long long)p;
        }
        else
        {
            v[ss]-=(long long)p;
            v[d+1]+=(long long)p;
        }
    }
    for(i=1;i<=n;i++)
        s[i]=s[i-1]+v[i];
    for(i=1;i<=n;i++)
    {
        r=(long long)w[i]+(long long)s[i];
        g<<r<<" ";
    }
    return 0;
}

