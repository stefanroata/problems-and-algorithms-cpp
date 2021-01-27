#include <fstream>

using namespace std;

ifstream f("vecini1.in");
ofstream g("vecini1.out");

int a[101][101];

int main()
{
    int n,m,i,j,nr=0;
    f>>n>>m;
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
        f>>a[i][j];
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            if(i==1&&j==1)
            {
                if(a[i+1][j]!=a[i][j+1])
                    nr++;
            }
                if(i==1&&j==m)
            {
                if(a[i][j-1]!=a[i+1][j])
                    nr++;
            }
                if(i==1&&j!=1&&j!=m)
            {
                if(a[i][j-1]!=a[i+1][j]&&a[i+1][j]!=a[i][j+1]&&a[i][j-1]!=a[i][j+1])
                    nr++;
            }
                if(i!=1)
            {
                if(i==n)
                {
                    if(j==1)
                    {
                        if(a[i-1][j]!=a[i][j+1])
                            nr++;
                    }
                    else
                    if(j==m)
                    {
                        if(a[i-1][j]!=a[i][j-1])
                            nr++;
                    }
                    else
                    {
                        if(a[i][j-1]!=a[i][j+1]&&a[i][j+1]!=a[i-1][j]&&a[i-1][j]!=a[i][j-1])
                            nr++;
                    }
                }
            }
            if(j==1&&i!=1&&i!=n)
            {
                if(a[i-1][j]!=a[i+1][j]&&a[i+1][j]!=a[i][j+1]&&a[i-1][j]!=a[i][j+1])
                    nr++;
            }
            if(j==m&&i!=1&&i!=n)
            {
                if(a[i-1][j]!=a[i+1][j]&&a[i-1][j]!=a[i][j-1]&&a[i+1][j]!=a[i][j-1])
                    nr++;
            }
            if(j!=1&&j!=m&&i!=1&&i!=n)
            {
                //a[i][j-1],a[i][j+1],a[i-1][j],a[i+1][j]
                if(a[i][j-1]!=a[i][j+1]&&a[i][j-1]!=a[i-1][j]&&a[i][j-1]!=a[i+1][j]&&a[i][j+1]!=a[i-1][j]&&a[i][j+1]!=a[i+1][j]&&a[i-1][j]!=a[i+1][j])
                    nr++;
            }
        }
    }
    g<<nr;
    return 0;
}
