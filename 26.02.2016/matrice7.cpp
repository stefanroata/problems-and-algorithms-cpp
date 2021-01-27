#include <fstream>
#include <climits>

using namespace std;

ifstream f("matrice7.in");
ofstream g("matrice7.out");

int a[101][101],mincol[101];

int main()
{
    int n,m,i,j,maxim=-1,minim;
    f>>n>>m;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            f>>a[i][j];
            if(a[i][j]>maxim)
                maxim=a[i][j];
        }
    }
    for(j=1;j<=m;j++)
    {
        minim=INT_MAX;
        for(i=1;i<=n;i++)
        {
            if(a[i][j]<minim)
                minim=a[i][j];
        }
        mincol[j]=minim;
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            if(a[i][j]==maxim)
                a[i][j]=mincol[j];
            g<<a[i][j]<<" ";
        }
        g<<'\n';
    }
    return 0;
}
