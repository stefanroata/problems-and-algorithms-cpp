#include <fstream>

using namespace std;

ifstream f("pozitie.in");
ofstream g("pozitie.out");

int main()
{
    int n,i,x,nr=0,primul;
    f>>n;
    f>>x;
    primul=x;
    for(i=1;i<=n-1;i++)
    {
        f>>x;
        if(x<primul)
            nr++;
    }
    g<<nr+1;
    return 0;
}
