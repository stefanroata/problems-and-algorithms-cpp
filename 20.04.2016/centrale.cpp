#include <fstream>

using namespace std;

ifstream f("centrale.in");
ofstream g("centrale.out");

int v[20];

int main()
{
    long long n,i,x,cif,j,nr,ok,t=0;
    f>>n;
    for(i=1;i<=n;i++)
    {
        f>>x;
        j=1;
        do
        {
            cif=x%10;
            x/=10;
            v[j++]=cif;
        }while(x);
        j--;
        nr=j;
        ok=1;
        for(j=2;j<=nr-2&&ok;j++)
            {
                if(v[j]!=v[j+1])
                    ok=0;
            }
        if(ok)
            t++;
    }
    g<<t;
    return 0;
}
