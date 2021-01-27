#include <fstream>
#include <algorithm>

using namespace std;

ifstream f("ingerasi.in");
ofstream g("ingerasi.out");

int main()
{
    int n,i,a,b,x,c;
    f>>n;
    f>>a;
    if(n==1)
        g<<a;
    else
    if(n==2)
    {
        f>>b;
        c=__gcd(a,b);
        g<<c;
    }
    else
    {
        f>>b;
        c=__gcd(a,b);
        for(i=3;i<=n;i++)
        {
            f>>x;
            c=__gcd(c,x);
        }
        g<<c;
    }
    return 0;
}
