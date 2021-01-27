#include <fstream>
#include <algorithm>

using namespace std;

ifstream f("halfsort.in");
ofstream g("halfsort.out");

int v[101];

bool cmp(int x,int y){return (x>y);}

int main()
{
    int n,i;
    f>>n;
    for(i=0;i<=n-1;i++)
        f>>v[i];
    sort(v,v+n/2);
    sort(v+n/2,v+n,cmp);
    for(i=0;i<=n-1;i++)
        g<<v[i]<<" ";
    return 0;
}
