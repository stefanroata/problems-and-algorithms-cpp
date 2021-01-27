#include <fstream>

using namespace std;

ifstream f("nraparitii.in");
ofstream g("nraparitii.out");

int v[101];

int main()
{
    int n,i,nr=0;
    f>>n;
    for(i=1;i<=n;i++)
        f>>v[i];
    for(i=1;i<=n;i++)
    {
        if(v[i]==v[n])
            nr++;
    }
    g<<nr;
    return 0;
}
