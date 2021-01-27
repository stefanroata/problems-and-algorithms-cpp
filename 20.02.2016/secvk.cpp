#include <fstream>
#include <climits>
using namespace std;

int v[100001],s[100001];

ifstream f("secvk.in");
ofstream g("secvk.out");

int main()
{
    long long n,i,k,ss,smax=INT_MIN,poz1,poz2;
    f>>n>>k;
    f>>v[1];
    s[1]=v[1];
    for(i=2;i<=n;i++)
    {
        f>>v[i];
        s[i]=s[i-1]+v[i];
    }
    for(i=1;i+k-1<=n;i++)
    {
        ss=s[i+k-1]-s[i-1];
        if(ss>smax)
        {
            smax=ss;
            poz1=i;
            poz2=i+k-1;
        }
    }
    for(i=poz1;i<=poz2;i++)
        g<<v[i]<<" ";
    return 0;

}
