#include <fstream>

using namespace std;

ifstream f("cladiri.in");
ofstream g("cladiri.out");

int v[15];

int modul(int x)
{
    if(x>=0)
        return x;
    else
        return -x;

}


int main()
{
    int n,i,cif,j,cifmax=0,ok1,ok2,nr=1,t,ok3,s=0,nrpal=0;
    long long x;
    f>>n;
    for(i=1;i<=n;i++)
    {
        f>>x;
        ok1=ok2=0;
        j=1;
        do
        {
            cif=x%10;
            if(cif>cifmax)
            {
                cifmax=cif;
                ok1=1;
            }
            else
                if(cif==cifmax)
                ok2=1;
            x/=10;
            v[j++]=cif;
        }while(x);
        j--;
        if(ok1)
            nr=1;
        if(ok2&&!ok1)
            nr++;
        ok3=0;
        for(t=1;t<=j/2;t++)
            {
                if(v[t]!=v[j-t+1])
                    ok3=1;
                s+=modul(v[t]-v[j-t+1]);
            }
        if(!ok3)
            nrpal++;
    }
    g<<cifmax<<" "<<nr<<'\n'<<nrpal<<'\n'<<s;
    return 0;
}
