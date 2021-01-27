#include <fstream>
#include <algorithm>

using namespace std;

ifstream f("tort.in");
ofstream g("tort.out");

int main()
{
    long long a,b,c;
    f>>a>>b;
    c=__gcd(a,b);
    g<<a*b/(c*c)<<" "<<c;
    return 0;
}
