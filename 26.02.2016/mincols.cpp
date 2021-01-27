#include <fstream>

using namespace std;

ifstream f("mincols.in");
ofstream g("mincols.out");

int a[51][51];

int main()
{
    int n,i,j,minim;
    f>>n;
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
        f>>a[i][j];
    for(j=1;j<=n;j++)
    {
        minim=1001;
        for(i=1;i<=n;i++)
        {
            if(a[i][j]<minim)
                minim=a[i][j];
        }
        g<<minim<<" ";
    }
    return 0;
}
