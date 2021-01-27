#include <fstream>

using namespace std;

ifstream f("biti.in");
ofstream g("biti.out");

bool bit(long long x)
{
    long long r;
    if(x==0)
        return 0;
    while(x)
    {
        r=x%2;
        if(r==0)
            return 0;
        x/=2;
    }
    return 1;
}

int main()
{
    int v[1000000001];
    int n,i,x,nr=0;
    f>>n;
    for(i=1;i<=n;i++)
    {
        f>>x;
        if(bit(x))
            nr++;
    }
    g<<nr;
    return 0;
}
