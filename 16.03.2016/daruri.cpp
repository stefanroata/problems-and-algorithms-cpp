#include <fstream>
#include <algorithm>

using namespace std;

ifstream f("daruri.in");
ofstream g("daruri.out");

int main()
{
    int a,b,c;
    f>>a>>b;
    c=__gcd(a,b);
    if(c<2)
    {
        g<<0<<'\n'<<0<<" "<<0;
    }
    else
    {
        g<<c<<'\n';
        g<<a/c<<" "<<b/c;
    }
    return 0;
}
