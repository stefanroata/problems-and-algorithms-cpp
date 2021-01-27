#include <fstream>

using namespace std;

ifstream f("nrlipsa.in");
ofstream g("nrlipsa.out");

int v[1001];

int main()
{
    int i,x,l=0,ok1,ok2,nr1,nr2;
    while(f>>x)
    {
        if(x>=100&&x<=999)
            v[x]=1;
    }
    ok1=0;
    ok2=0;
    for(i=999;i>=100;i--)
    {
        if(v[i]==0)
        {
            l++;
            if(l==1)
                {nr1=i;
                ok1=1;
                }
            if(l==2)
                {nr2=i;
                ok2=1;
                }
            if(l>2)
                break;
        }
    }
    if(ok1&&ok2)
        g<<nr1<<" "<<nr2;
    else
        g<<"NU";
    return 0;
}
