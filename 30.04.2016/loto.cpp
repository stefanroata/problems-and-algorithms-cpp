#include <fstream>
#include <algorithm>

using namespace std;

ifstream f("loto.in");
ofstream g("loto.out");

int v[1001],b[10];
bool frecv[10001];

int modul(int x)
{
    if(x>0)return x;
    else
    return -x;
}

int main()
{
    int n,i,dif,primul,ultimul,difmin=9999999,nr1,nr2;
    f>>n;
    for(i=1;i<=n;i++)
        f>>v[i];
    for(i=1;i<=6;i++)
        {
            f>>b[i];
            frecv[b[i]]=1;
        }
    sort(b+1,b+7);
    primul=b[1];
    ultimul=b[6];
    for(i=1;i<=n;i++)
    {
        if(!frecv[v[i]])
        {
            dif=modul(v[i]-primul);
            if(dif<difmin)
            {
                difmin=dif;
                nr1=v[i];
            }
            else
                if(dif==difmin)
            {
                if(v[i]>nr1)
                    nr1=v[i];
            }
        }
    }
    for(i=1;i<=n;i++)
    {
        if(v[i]==nr1)
        {
            frecv[v[i]]=1;
            break;
        }
    }
    swap(b[1],nr1);
    difmin=99999999;
    for(i=1;i<=n;i++)
    {
        if(!frecv[v[i]])
        {
            dif=modul(v[i]-ultimul);
            if(dif<difmin)
            {
                difmin=dif;
                nr2=v[i];
            }
            else
                if(dif==difmin)
            {
                if(v[i]>nr2)
                    nr2=v[i];
            }
        }
    }
    swap(b[6],nr2);
    sort(b+1,b+7);
    for(i=1;i<=6;i++)
        g<<b[i]<<" ";
    return 0;
}
