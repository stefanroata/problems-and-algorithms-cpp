#include <fstream>

using namespace std;

ifstream f("ciffrecv.in");
ofstream g("ciffrecv.out");

int v[15];

bool prim(int x)
{
    if(x==2||x==3||x==5||x==7)
        return true;
    return false;
}

int main()
{
    int x;
    while(f>>x)
    {
        if(prim(x))
            v[x]++;
    }
    if(v[7]>0)
        {
        g<<7<<" "<<v[7];
        return 0;
        }
    if(v[5]>0)
    {
        g<<5<<" "<<v[5];
        return 0;
    }
    if(v[3]>0)
    {
        g<<3<<" "<<v[3];
        return 0;
    }
    if(v[2]>0)
    {
        g<<2<<" "<<v[2];
        return 0;
    }
}
