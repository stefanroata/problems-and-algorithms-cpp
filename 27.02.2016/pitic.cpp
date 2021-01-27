#include <fstream>

using namespace std;

ifstream f("pitic.in");
ofstream g("pitic.out");

bool prim(int x)
{
    int i;
    if(x<2)
        return false;
    if(x==2)
        return true;
    if(x%2==0)
        return false;
    for(i=3;i*i<=x;i+=2)
        if(x%i==0)
        return false;
    return true;
}

int sumdiv(int x)
{
    int s=0,i;
    for(i=1;i*i<x;i++)
    {
        if(x%i==0)
        {
            if(prim(i))
                s+=i;
            if(prim(x/i))
                s+=x/i;
        }
    }
    if(i*i==x)
    {
        if(prim(i))
            s+=i;
    }
    return s;
}

int main()
{
    int n,i;
    f>>n;
    for(i=1;i<=n;i++)
    {
        if(prim(i))
            g<<i<<" ";
        else
            g<<sumdiv(i)<<" ";
    }
    return 0;
}
