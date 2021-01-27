#include <fstream>
#include <algorithm>

using namespace std;

ifstream f("sortare.in");
ofstream g("sortare.out");

int v[101];

bool cmp(int x,int y)
{
    return (x>y);
}

int main()
{
    int n,i;
    f>>n;
    for(i=1;i<=n;i++)
        f>>v[i];
    sort(v+1,v+n+1,cmp);
    for(i=1;i<=n;i++)
        g<<v[i]<<" ";
    return 0;
}
