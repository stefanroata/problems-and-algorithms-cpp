#include <fstream>

using namespace std;

ifstream f("sume.in");
ofstream g("sume.out");

int v[101];

int main()
{
    int n,i,s=0;
    f>>n;
    for(i=1;i<=n;i++)
        {f>>v[i];
        s+=v[i];
        }

    g<<s<<'\n';
    for(i=n;i>=2;i--)
        {
            s-=v[i];
            g<<s<<'\n';
        }
    return 0;

}
