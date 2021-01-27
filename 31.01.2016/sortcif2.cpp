#include <fstream>
#include <algorithm>

using namespace std;

ifstream f("sortcif2.in");
ofstream g("sortcif2.out");

int v[101];

int prima_cifra(int x)
{
    if(x<0)
        x=-x;
    do
    {
        x=x/10;
    }while(x>9);
    return x;
}

bool cmp(int x,int y)
{
    return (prima_cifra(x)<prima_cifra(y));
}


int main()
{
    int n,i;
    f>>n;
    for(i=1;i<=n;i++)
        f>>v[i];
    sort(v+1,v+n+1,cmp);
    for(i=1;i<=n;i++)
        g<<v[i]<<" ";
    return 0;
}
