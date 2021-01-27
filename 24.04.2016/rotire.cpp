#include <fstream>

using namespace std;

ifstream f("rotire.in");
ofstream g("rotire.out");

int a[15][15];

int main()
{
    int n,m,i,j;
    f>>n>>m;
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
        f>>a[i][j];
    for(j=m;j>=1;j--)
    {
        for(i=1;i<=n;i++)
            g<<a[i][j]<<" ";
        g<<'\n';
    }
    return 0;
}
