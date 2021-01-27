#include <fstream>

using namespace std;

ifstream f("pozitiex.in");
ofstream g("pozitiex.out");

int main()
{
    long long x,n,i,nr=0,y,ok=0;
    f>>x>>n;
    for(i=1;i<=n;i++)
        {
            f>>y;
            if(y<=x)
                nr++;
            if(x==y)
                ok=1;
        }
    if(ok)
    g<<nr;
    else
        g<<"NU EXISTA";
    return 0;
}
