#include <fstream>
#include <algorithm>

using namespace std;

ifstream f("cifreord.in");
ofstream g("cifreord.out");

int v[100001];

int main()
{
    int n,i;
    f>>n;
    for(i=1;i<=n;i++)
        f>>v[i];
    sort(v+1,v+n+1);
    for(i=1;i<=n;i++)
    {
        g<<v[i]<<" ";
        if(i%20==0)
            g<<'\n';
    }
    return 0;
}
