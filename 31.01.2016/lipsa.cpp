#include <fstream>

using namespace std;

ifstream f("lipsa.in");
ofstream g("lipsa.out");

int main()
{
    long long n,i,s=0,x;
    f>>n;
    for(i=1;i<=n-1;i++)
    {
        f>>x;
        s+=x;
    }
    g<<n*(n+1)/2-s;
    return 0;
}
