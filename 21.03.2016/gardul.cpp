#include <fstream>
#include <algorithm>

using namespace std;

ifstream f("gardul.in");
ofstream g("gardul.out");

int main()
{
    int n,p,q,cmmdc,cmmmc,nrviolet,nrrosii,nralbastre,nevopsite;
    f>>n>>p>>q;
    cmmdc=__gcd(p,q);
    cmmmc=p*q/cmmdc;
    nrviolet=n/cmmmc;
    nrrosii=n/p-nrviolet;
    nralbastre=n/q-nrviolet;
    nevopsite=n-nrrosii-nralbastre-nrviolet;
    g<<nevopsite<<'\n'<<nrrosii<<'\n'<<nralbastre<<'\n'<<nrviolet;
    return 0;
}
