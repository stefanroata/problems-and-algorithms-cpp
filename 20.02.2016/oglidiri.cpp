#include <fstream>

using namespace std;

ifstream f("oglindiri.in");
ofstream g("oglindiri.out");

int v[101];

void oglindire(int i,int j)
{
    while(i<j)
    {
        swap(v[i],v[j]);
        i++;
        j--;
    }
}

int main()
{
    int n,i,m,a,b;
    f>>n;
    for(i=1;i<=n;i++)
        f>>v[i];
    f>>m;
    for(i=1;i<=m;i++)
    {
        f>>a>>b;
        oglindire(a,b);
    }
    for(i=1;i<=n;i++)
        g<<v[i]<<" ";
    return 0;
}
