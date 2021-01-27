#include <fstream>

using namespace std;

ifstream f("maxim4.in");
ofstream g("maxim4.out");

int main()
{
    int n,i,x,maxim,ap=1;
    f>>n;
    f>>x;
    maxim=x;
    for(i=1;i<=n-1;i++)
    {
        f>>x;
        if(x>maxim)
        {
            maxim=x;
            ap=1;
        }
        else
            if(x==maxim)
            ap++;
    }
    g<<maxim<<" "<<ap;
    return 0;

}
