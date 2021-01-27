#include <fstream>

using namespace std;

ifstream f("distanta.in");
ofstream g("distanta.out");

int v[1001];

int main()
{
    int x,i=1,dist,distmax=-1;
    while(f>>x)
    {
        if(v[x]==0)
        v[x]=i;
        dist=i-v[x];
        if(dist>distmax)
            distmax=dist;
        i++;
    }
    g<<distmax;
    return 0;
}
