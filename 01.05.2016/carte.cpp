#include <fstream>

using namespace std;

ifstream f("carte.in");
ofstream g("carte.out");

int v[10003];

int main()
{
    int n,i,x,l=1,lmax=1,p=0,nrp=1;
    f>>n;
    for(i=1;i<=n;i++)
    {
        f>>x;
        v[x]=i;
    }
    for(i=1;i<=n-1;i++)
    {
        if(v[i]<v[i+1])
            l++;
        else
        {
            p++;
            if(l>lmax)
            {
                lmax=l;
                nrp=p;
            }
            l=1;
        }
    }
    p++;
    if(l>lmax)
    {
        lmax=l;
        nrp=p;
    }
    g<<p<<" "<<nrp<<" "<<lmax;
    return 0;
}
