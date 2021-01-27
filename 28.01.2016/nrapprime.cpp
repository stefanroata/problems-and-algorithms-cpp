#include <fstream>

using namespace std;

ifstream f("nrapprime.in");
ofstream g("nrapprime.out");

bool prim(int x)
{
    int i;
    if(x<2)
        return false;
    if(x==2)
        return true;
    if(x%2==0)
        return false;
    for(i=3;i*i<=x;i+=2)
        if(x%i==0)
        return false;
    return true;
}

int main()
{
    int n,i,x,nr=0;
    f>>n;
    for(i=1;i<=n;i++)
    {
        f>>x;
        if(prim(x))
            nr++;
    }
    g<<nr;
    return 0;
}
