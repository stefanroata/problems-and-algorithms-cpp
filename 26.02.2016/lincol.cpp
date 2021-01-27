#include <fstream>

using namespace std;

ifstream f("lincol.in");
ofstream g("lincol.out");

int a[101][101],l[101],c[101];

int main()
{
    int n,m,i,j,t,w;
    char car;
    f>>n>>m;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            f>>a[i][j];
            l[i]+=a[i][j];
        }
    }
    for(j=1;j<=m;j++)
    {
        for(i=1;i<=n;i++)
            c[j]+=a[i][j];
    }
    f>>t;
    for(i=1;i<=t;i++)
    {
        f>>car>>w;
        if(car=='L')
            g<<l[w]<<'\n';
        if(car=='C')
            g<<c[w]<<'\n';
    }
    return 0;
}
