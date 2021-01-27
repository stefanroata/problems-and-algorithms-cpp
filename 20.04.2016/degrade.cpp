#include <fstream>
#include <cstring>

using namespace std;

ifstream f("degrade.in");
ofstream g("degrade.out");

char a[20];
int fv[300],v[100005];

int main()
{
    int n,i,l=1,lmax=1,nr=1;
    char c;

    f>>a;
    n=strlen(a);
    for(i=0;i<=n-1;i++)
        fv[(int)a[i]]=i+1;
    i=1;
    while(f>>c)
        v[i++]=fv[(int)c];
    i--;
    n=i;
    for(i=1;i<=n-1;i++)
    {
        if(v[i]<=v[i+1])
            l++;
        else
        {
            if(l>lmax)
            {
                lmax=l;
                nr=1;
            }
            else
                if(l==lmax)
                nr++;
            l=1;
        }
    }
     if(l>lmax)
            {
                lmax=l;
                nr=1;
            }
     else
        if(l==lmax)
                nr++;
    g<<lmax<<" "<<nr;
    return 0;
}
