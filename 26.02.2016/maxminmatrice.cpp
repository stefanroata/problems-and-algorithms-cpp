#include <fstream>

using namespace std;

ifstream f("maxminmatrice.in");
ofstream g("maxminmatrice.out");

int a[25][25],v[25];

int main()
{
    int n,m,i,j,minim,maxim=-1;
    f>>n>>m;
    for(i=1;i<=n;i++)
    {
        minim=1001;
        for(j=1;j<=m;j++)
        {
            f>>a[i][j];
            if(a[i][j]<minim)
                minim=a[i][j];
        }
        v[i]=minim;
    }
    for(i=1;i<=n;i++)
    {
        if(v[i]>maxim)
            maxim=v[i];
    }
    g<<maxim;
    return 0;
}
