#include <fstream>

using namespace std;

ifstream f("maxcif.in");
ofstream g("maxcif.out");

int v[20];

int main()
{
    int x,maxim=0,i;
    while(f>>x)
    {
        v[x]++;
        if(v[x]>maxim)
            maxim=v[x];
    }
    for(i=0;i<=9;i++)
    {
        if(v[i]==maxim)
            g<<i<<" ";
    }
    return 0;
}
