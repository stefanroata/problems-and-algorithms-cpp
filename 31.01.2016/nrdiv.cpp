#include <fstream>

using namespace std;

ifstream f("nrdiv.in");
ofstream g("nrdiv.out");

int main()
{
    int n,i,nr=0;
    f>>n;
    for(i=1;i*i<n;i++)
        if(n%i==0)
        nr+=2;
    if(i*i==n)
        nr++;
    g<<nr;
    return 0;
}
