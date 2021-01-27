#include <fstream>

using namespace std;

ifstream f("sumainsecv.in");
ofstream g("sumainsecv.out");

int v[101];

int main()
{
    int n,sc,s,i,j,ok=0;
    f>>n>>sc;
    for(i=1;i<=n;i++)
        f>>v[i];
    for(i=1;i<=n;i++)
    {
        s=0;
        for(j=i;j<=n;j++)
        {
            s+=v[j];
            if(s==sc)
            {
                g<<i<<" "<<j;
                ok=1;
                return 0;
            }
        }
    }
    if(ok==0)
        g<<0<<" "<<0;
    return 0;
}
