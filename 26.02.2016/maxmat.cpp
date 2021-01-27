#include <fstream>

using namespace std;

ifstream f("maxmat.in");
ofstream g("maxmat.out");

int a[101][101];

int main()
{
    int n,m,i,j,maxim;
    f>>n>>m;
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
        f>>a[i][j];
    for(i=1;i<=n;i++)
    {
        maxim=-1001;
        for(j=1;j<=m;j++)
            if(a[i][j]>maxim)
            maxim=a[i][j];
        for(j=1;j<=m;j++)
        {
            if(a[i][j]==maxim)
            {
                g<<maxim<<" "<<j<<'\n';
                break;
            }
        }
    }
    return 0;
}

