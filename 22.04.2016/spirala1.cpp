#include <fstream>
#include <cmath>

using namespace std;

ifstream f("spirala1.in");
ofstream g("spirala1.out");

int a[105][105],v[10005];

int main()
{
    int n,i,j,k,l,c,t=1;
    f>>n;
    for(i=1;i<=n;i++)
        f>>v[i];
    n=sqrtl(n);
    t=1;
    for(k=1;k<=n/2+1;k++)
    {
        for(l=k;l<=n-k+1;l++)
            a[l][k]=v[t],t++;
        for(c=k+1;c<=n-k+1;c++)
            a[n-k+1][c]=v[t],t++;
        for(l=n-k;l>=k;l--)
            a[l][n-k+1]=v[t],t++;
        for(c=n-k;c>=k+1;c--)
            a[k][c]=v[t],t++;
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
            g<<a[i][j]<<" ";
        g<<'\n';
    }
    return 0;
}
