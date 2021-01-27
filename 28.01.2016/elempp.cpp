#include <fstream>
#include <cmath>

using namespace std;

ifstream f("elempp.in");
ofstream g("elempp.out");

int v[30];

int main()
{
    int n,i,x;
    f>>n;
    for(i=1;i<=n;i++)
        f>>v[i];
    for(i=1;i<=n;i++)
    {
        x=v[i];
        while(x>99)
            x/=10;
        if(sqrt(x)==(int)sqrt(x))
            g<<v[i]<<" ";
    }
    return 0;
}
