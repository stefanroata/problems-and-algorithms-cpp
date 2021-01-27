#include <fstream>

using namespace std;

ifstream f("secvcresc.in");
ofstream g("secvcresc.out");

int v[10001];

int main()
{
    int n,i,l=1,lmax=0,poz;
    f>>n;
    for(i=1;i<=n;i++)
        f>>v[i];
    for(i=1;i<=n-1;i++)
    {
        if(v[i]<v[i+1])
            l++;
        else
        {
            if(l>lmax)
            {
                lmax=l;
                poz=i;
            }
            l=1;
        }
    }
    if(l>lmax)
    {
        lmax=l;
        poz=i;
    }
    g<<poz-lmax+1<<" "<<poz;
    return 0;
}
