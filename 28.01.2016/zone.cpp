#include <fstream>

using namespace std;

ifstream f("zone.in");
ofstream g("zone.out");

int v[304];

int main()
{
    int x,n,i,ok1,ok2,poz1=-1,poz2=-1;
    f>>x;
    n=3*x;
    for(i=1;i<=n;i++)
        f>>v[i];
    ok1=0;
    for(i=1;i<=x;i++)
    {
        if(v[i]%2==0)
        {
            ok1=1;
            poz1=i;
            break;
        }
    }
    ok2=0;
    for(i=2*x+1;i<=3*x;i++)
    {
        if(v[i]%2==1)
        {
            ok2=1;
            poz2=i;
        }
    }
    if(ok1&&ok2)
        swap(v[poz1],v[poz2]);
    for(i=1;i<=n;i++)
        g<<v[i]<<" ";
    return 0;
}
