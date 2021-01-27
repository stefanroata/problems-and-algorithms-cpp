#include <fstream>

using namespace std;

ifstream f("colzero.in");
ofstream g("colzero.out");

int a[101][101];

int main()
{
    int n,m,i,j,nr=0;
    f>>n>>m;
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
        f>>a[i][j];
    for(j=1;j<=m;j++)
    {
        i=1;
        while(a[i][j]==0&&i<=n)
            i++;
        if(i==n+1)
            nr++;
    }
    g<<nr;
    return 0;
}
