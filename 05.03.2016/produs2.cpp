#include <fstream>

using namespace std;

ifstream f("produs2.in");
ofstream g("produs2.out");

long long v[1000001];

int main()
{
    long long n,i,prod,li,ls,pp=1,nr=0;
    f>>n>>prod;
    for(i=1;i<=n;i++)
        f>>v[i];
    li=1;
    while(li<=n)
    {
    ls=n;
    while(li<=ls)
    {
        pp=1;
        for(i=li;i<=ls;i++)
            pp*=1LL*v[i];
        if(pp<prod)
            {
                nr+=(ls-li+1)*(ls-li+2)/2;
                li=ls;
                break;
            }
        ls--;
    }
    li++;
    }
    g<<nr;
    return 0;
}
