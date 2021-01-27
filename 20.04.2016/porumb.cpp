#include <fstream>

using namespace std;

ifstream f("porumb.in");
ofstream g("porumb.out");

int v[101],s[101];

int main()
{
    int n,m,i,t;
    f>>n>>m;
    for(i=1;i<=n;i++)
    {
        f>>v[i];
        s[i]=s[i-1]+v[i];
    }
    t=n-1+s[n]+min(m-1,n-m);
    g<<t;
    return 0;
}
