#include <fstream>
#include <iostream>
using namespace std;

ifstream f("easyquery.in");
ofstream g("easyquery.out");

long long v[100005];

int main()
{
    long long n,i,q,s,d,p,k;
    f>>n;
    for(i=1;i<=n;i++)
        f>>v[i];
    f>>k;
    for(i=1;i<=k;i++)
    {
        f>>q;
        f>>s>>d>>p;
        if(q==1)
        {
            v[s]+=p;
            v[d+1]-=p;
        }
        else
        {
            v[s]-=p;
            v[d+1]+=p;
        }
        cout<<q<<" ";
    }
    s=v[1];
    g<<s<<" ";
    for(i=2;i<=n;i++)
    {
        s+=v[i];
        g<<s<<" ";
    }
    return 0;
}
