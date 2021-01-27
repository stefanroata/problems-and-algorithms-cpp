#include <fstream>

using namespace std;

ifstream f("cuburi3.in");
ofstream g("cuburi3.out");

int v1[1001],v2[1001];

int main()
{
    int n,i,x,y,d=0,c=0;
    f>>n;
    for(i=1;i<=n;i++)
    {
        f>>x>>y;
        v1[x]++;
        v2[y]++;
    }
    for(i=1;i<=1000;i++)
    {
        if(v1[i])
            d++;
        if(v2[i])
            c++;
    }
    if(d==c)
        g<<"DC "<<d;
    else
        if(d>c)
        g<<"C "<<c;
    else
        if(d<c)
        g<<"D "<<d;
    return 0;
}
