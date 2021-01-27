#include <fstream>

using namespace std;

ifstream f("marcare.in");
ofstream g("marcare.out");

bool v[300];

int main()
{
    int n,s,k,nr=0,i;
    f>>n>>s>>k;
    g<<s<<" ";
    v[s]=1;
    while(1)
    {
        s+=k;
        s=s%n;
        if(s==0)
            s=n;
        if(v[s])
            break;
        else
        {
            g<<s<<" ";
            v[s]=1;
        }
    }
    for(i=1;i<=n;i++)
        if(!v[i])nr++;
    g<<'\n'<<nr;
    return 0;
}
