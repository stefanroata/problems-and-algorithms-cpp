#include <fstream>
#include <climits>
using namespace std;

ifstream f("cifra1.in");
ofstream g ("cifra1.out");

int main()
{
    long long n,c,p=1,minim=LONG_LONG_MAX,x,r;
    f>>n>>c;
    do
    {
        x=n/p;
        r=n%p;
        x=x*10+c;
        x=x*p+r;
        if(x<minim)
            minim=x;
        p*=10;
    }while(p/10<=n);

    g<<minim;
    return 0;
}
