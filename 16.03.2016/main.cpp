#include <fstream>

using namespace std;

ifstream f("case1.in");
ofstream g("case1.out");

int main()
{
    int n,i,x,c1,c2,c3,c4,nr1=0,nr2=0,nr3=0,nrc=0,nrb=0,nrf=0;
    f>>n;
    for(i=1;i<=n;i++)
    {
        f>>x;
        c4=x%10;
        x/=10;
        c3=x%10;
        x/=10;
        c2=x%10;
        x/=10;
        c1=x%10;
        if(c1==1)
            nr1++;
        if(c1==2)
            nr2++;
        if(c1==3)
            nr3++;
        nrb+=c2;
        nrf+=c3;
        nrc+=c4;
    }
    g<<nr1<<'\n'<<nr2<<'\n'<<nr3<<'\n'<<nrb<<'\n'<<nrf<<'\n'<<nrc;
    return 0;
}
