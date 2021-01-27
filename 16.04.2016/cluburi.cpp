#include <fstream>

using namespace std;

ifstream f("cluburi.in");
ofstream g("cluburi.out");

bool v[30001];

int main()
{
    int n,i=1,p=1,a=0;
    f>>n;
    while(n)
    {
        v[i]=n%2;
        if(v[i])
            a++;
        i++;
        n/=2;
    }
    i--;
    n=i;
    g<<a<<'\n';
    for(i=1;i<=n;i++)
    {
        if(v[i])
            g<<p<<" ";
        p*=2;
    }
    return 0;
}
