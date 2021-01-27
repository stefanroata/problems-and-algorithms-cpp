#include <fstream>
#include <algorithm>

using namespace std;

ifstream f("numerologie.in");
ofstream g("numerologie.out");

int v[1251],fact[1251],cost[1251],n;
bool gasit[1251];

int binary_search_element(int x)
{
    int li,ls,mij;
    li=1;
    ls=n;
    while(li<=ls)
    {
        mij=(li+ls)/2;
        if(v[mij]==x&&gasit[mij]==0)
            return mij;
        else
            if(v[mij]==x&&gasit[mij]==1)
            return -1;
        else
            if(v[mij]<x)
                li=mij+1;
        else
            if(v[mij]>x)
            ls=mij-1;
    }
    return -1;
}

int main()
{
    int m,i,x,t,nr,u;
    long long s=0;
    bool ok;
    f>>n>>m;
    for(i=1;i<=n;i++)
        f>>v[i];
    nr=n;
    sort(v+1,v+n+1);
    for(i=1;i<=m;i++)
    {
        f>>x;
        if(x!=-1)
        {
            ok=0;
            t=i;
            while(t<=m)
            {
                u=binary_search_element(t);
                if(u!=-1)
                {
                    gasit[u]=1;
                    nr--;
                    ok=1;
                }
                t+=i;
            }
            if(ok)
            s+=x;
        }
        if(nr==0)
            break;
    }
    g<<s;
    return 0;
}
