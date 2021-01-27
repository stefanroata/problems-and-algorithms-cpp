#include <fstream>

using namespace std;

ifstream f("2prim.in");
ofstream g("2prim.out");

bool v[101];

void ciur()
{
    int i,j;
    v[0]=v[1]=1;
    for(i=4;i<=100;i+=2)
        v[i]=1;
    for(i=3;i*i<=100;i+=2)
    {
        if(v[i]==0)
        {
            for(j=i*i;j<=100;j+=i)
                v[j]=1;
        }
    }
}

int main()
{
    int n,i,x,nr=0;
    ciur();
    f>>n;
    for(i=1;i<=n;i++)
    {
        f>>x;
        x=x%100;
        if(v[x]==0)
            nr++;
    }
    g<<nr;
    return 0;
}
