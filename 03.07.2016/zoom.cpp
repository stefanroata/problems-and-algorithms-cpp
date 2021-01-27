#include <fstream>

using namespace std;

ifstream f("zoom.in");
ofstream g("zoom.out");

int a[1001][1001],mat[11][11];

int main()
{
    int n,m,p,i,j,k,t,ok,nr=0;
    f>>p>>n>>m;
    for(i=1;i<=p;i++)
        for(j=1;j<=p;j++)
        f>>mat[i][j];
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
        f>>a[i][j];
    for(i=1;i<=n-p+1;i++)
    {
        for(j=1;j<=m-p+1;j++)
        {
            ok=1;
            for(k=i;k<=i+p-1&&ok;k++)
            {
                for(t=j;t<=j+p-1&&ok;t++)
                {
                    if(a[k][t]!=mat[k-i+1][t-j+1])
                        ok=0;
                }
            }
            if(ok)
            nr++;
        }
    }
    g<<nr;
    return 0;
}
