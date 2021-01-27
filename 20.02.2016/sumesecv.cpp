#include <fstream>

using namespace std;

ifstream f("sumesecv.in");
ofstream g("sumesecv.out");

int v[101],s[101];

int main()
{
    int n,m,i,j,k;
    f>>n;
    f>>v[1];
    s[1]=v[1];
    for(i=2;i<=n;i++)
    {
        f>>v[i];
        s[i]=s[i-1]+v[i];
    }
    f>>m;
    for(k=1;k<=m;k++)
    {
        f>>i>>j;
        g<<s[j]-s[i-1]<<" ";
    }
    return 0;
}
