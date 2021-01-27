#include <fstream>

using namespace std;

ifstream f("asfalt.in");
ofstream g("asfalt.out");

int v[10001];

int main()
{
    int n,m,i,x,y,nr=0,k,r=0;
    f>>n>>m;
    for(i=1;i<=m;i++)
    {
        f>>x>>y;
        for(k=x;k<=y-1;k++)
        {
        v[k]++;
        }
    }
    for(i=0;i<=n-1;i++)
        {
        if(v[i]==0)
        r++;
        if(v[i]>1)
            nr++;
        }
    g<<r<<" "<<nr;
    return 0;
}
