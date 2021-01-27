#include <fstream>

using namespace std;

ifstream f("interviu.in");
ofstream g("interviu.out");

int v[101];

int main()
{
    int n,i,maxx,poz=-1;
    f>>n;
    for(i=1;i<=n;i++)
        f>>v[i];
    maxx=max(max(v[1],v[2]),v[3]);
    for(i=4;i<=n;i++)
    {
        if(v[i]>maxx)
        {
            maxx=v[i];
            poz=i;
            break;
        }
    }
    if(poz==-1)
        poz=n;
    g<<poz;
    return 0;
}
