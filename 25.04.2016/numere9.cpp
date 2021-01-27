#include <fstream>

using namespace std;

ifstream f("numere7.in");
ofstream g("numere7.out");

int main()
{
    long long n,i,nr=0,s1=0,s2,x,s,t;
    f>>n;
    for(i=1;i<=n*n;i++)
    {
        f>>x;
        if(x==0)
            nr++;
        else
            s1+=x;
    }
    t=n*n;
    s2=t*(t+1)/2;
    s=s2-s1;
    s-=(nr*(nr-1)/2);
    s/=nr;
    g<<s<<" "<<s+nr-1;
    return 0;
}
