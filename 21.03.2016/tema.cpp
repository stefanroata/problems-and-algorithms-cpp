#include <fstream>

using namespace std;

ifstream f("tema.in");
ofstream g("tema.out");

int v[102];

int main()
{
    int n,m,i,x;
    f>>n;
    f>>m;
    for(i=1;i<=m;i++)
    {
        f>>x;
        v[x]++;
    }
    for(i=1;i<=n;i++)
    {
        if(v[i]==0)
            g<<i<<" ";
    }
    return 0;
}
