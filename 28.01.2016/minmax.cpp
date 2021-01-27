#include <fstream>

using namespace std;

ifstream f("minmax.in");
ofstream g("minmax.out");

int main()
{
    int n,i,x,maxim,minim;
    f>>n;
    f>>x;
    minim=x;
    maxim=x;
    for(i=1;i<=n-1;i++)
    {
        f>>x;
        if(x>maxim)
            maxim=x;
        if(x<minim)
            minim=x;
    }
    g<<minim<<" "<<maxim;
    return 0;
}
