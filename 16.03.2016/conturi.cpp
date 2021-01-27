#include <fstream>

using namespace std;

ifstream f("conturi.in");
ofstream g("conturi.out");

int main()
{
    int n,i,x,suma,t,c1,c2,nr,maxim=-1;
    f>>n>>x;
    for(i=1;i<=n;i++)
    {
        f>>nr;
        suma=nr%10000;
        t=nr/10000;
        c2=t%10;
        t/=10;
        c1=t;
        if(c1==x)
        {
            if(c2==1)
            {
                if(suma>maxim)
                    maxim=suma;
            }
        }
    }
    g<<maxim;
    return 0;
}
