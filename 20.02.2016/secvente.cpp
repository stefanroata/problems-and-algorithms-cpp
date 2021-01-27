#include <fstream>

using namespace std;

ifstream f("secvente.in");
ofstream g("secvente.out");

int v[1001];

int main()
{
    int n,i,l=1,nrsecv=0;
    f>>n;
    for(i=1;i<=n;i++)
        f>>v[i];
    for(i=1;i<=n-1;i++)
    {
        if(v[i]<=v[i+1])
            l++;
        else
        {
            nrsecv++;
            l=1;
        }
    }
    nrsecv++;
    if(v[n]<v[n-1])
        nrsecv++;
    g<<nrsecv;
    return 0;
}
