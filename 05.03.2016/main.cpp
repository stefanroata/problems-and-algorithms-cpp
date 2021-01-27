#include <fstream>

using namespace std;

ifstream f("produs2.in");
ofstream g("produs2.out");

int v[1000001];
long long pp[1000001];

int main()
{
    int n,i,prod,p,li,ls,nr=0,ok;
    f>>n>>prod;
    pp[0]=1;
    f>>v[1];
    pp[1]=v[1];
    for(i=2;i<=n;i++)
        {
            f>>v[i];
            pp[i]=pp[i-1]*v[i];
        }
    li=ls=1;
    while(li<=n)
    {
        ls=li;
        do
        {
        if(li<=n&&ls<=n)
        {
        p=pp[ls];
        p=p/pp[li-1];
        if(p<prod)
                nr++;
        if(p>prod)
            break;
        }
        ls++;
        }while(ls<=n);
        li++;
    }
    g<<nr;
    return 0;
}
