#include <fstream>
#include <algorithm>

using namespace std;

ifstream f("vraji.in");
ofstream g("vraji.out");

int main()
{
    int n,i,a,b,p,maxim,c;
    f>>n;
    f>>a>>b;
    p=a*b;
    maxim=p;
    c=p;
    for(i=1;i<=n;i++)
    {
        f>>a>>b;
        p=a*b;
        if(p>maxim)
            maxim=p;
        c=__gcd(c,p);
    }
    g<<maxim<<'\n'<<c;
    return 0;
}
