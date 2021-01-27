#include <fstream>
#include <climits>

using namespace std;

ifstream f("interschimbarelinii.in");
ofstream g("interschimbarelinii.out");

int a[50][50];

int main()
{
    int n,m,i,j,minim=INT_MAX,maxim=INT_MIN,lin1,lin2;
    f>>n>>m;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            f>>a[i][j];
            if(a[i][j]<minim)
            {
                minim=a[i][j];
                lin1=i;
            }
            if(a[i][j]>maxim)
            {
                maxim=a[i][j];
                lin2=i;
            }
        }
    }
    for(j=1;j<=m;j++)
        swap(a[lin1][j],a[lin2][j]);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
            g<<a[i][j]<<" ";
        g<<'\n';
    }
    return 0;
}
