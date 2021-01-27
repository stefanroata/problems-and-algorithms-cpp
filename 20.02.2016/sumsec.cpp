#include <fstream>

using namespace std;
ifstream f("sumsec.in");
ofstream g("sumsec.out");


long long v[1001];

bool prim(long long x)
{
    if(x<2)
        return false;
    if(x==2)
        return true;
    if(x%2==0)
        return false;
    long long i;
    for(i=3;i*i<=x;i+=2)
        if(x%i==0)
        return false;
    return true;
}

int main()
{
    int n,i,poz1,poz2;
    unsigned long long s=0;
    f>>n;
    for(i=1;i<=n;i++)
    {
        f>>v[i];
        if(prim(v[i]))
            poz2=i;
    }
    for(i=1;i<=n;i++)
    {
        if(prim(v[i]))
        {
            poz1=i;
            break;
        }
    }
    for(i=poz1;i<=poz2;i++)
        s+=v[i];
    g<<s;
    return 0;
}
