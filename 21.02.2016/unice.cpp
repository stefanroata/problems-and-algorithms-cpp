#include <fstream>

using namespace std;

ifstream f("unice.in");
ofstream g("unice.out");

int v[101];

int main()
{
    int n,i,x;
    f>>n;
    for(i=1;i<=n;i++)
    {
        f>>x;
        v[x]++;
    }
    for(i=0;i<=99;i++)
    {
        if(v[i]==1)
            g<<i<<" ";
    }
    return 0;
}
