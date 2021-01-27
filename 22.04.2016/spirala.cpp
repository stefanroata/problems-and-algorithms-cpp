#include <fstream>

using namespace std;

ifstream f("spirala.in");
ofstream g("spirala.out");

int a[50][50];

int main()
{
    int n,i,j,l,c,k;
    f>>n;
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
        f>>a[i][j];
    for(k=1;k<=n/2+1;k++)
    {
        for(c=k;c<=n-k+1;c++)g<<a[k][c]<<" ";
        for(l=k+1;l<=n-k+1;l++)g<<a[l][n-k+1]<<" ";
        for(c=n-k;c>=k;c--)g<<a[n-k+1][c]<<" ";
        for(l=n-k;l>=k+1;l--)g<<a[l][k]<<" ";
    }
    return 0;
}
