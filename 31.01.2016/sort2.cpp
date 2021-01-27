#include <fstream>
#include <algorithm>

using namespace std;

ifstream f("sort2.in");
ofstream g("sort2.out");

int v[101];

bool minim2cifre(int x)
{
    int nrc=0;
    do
    {
        x=x/10;
        nrc++;
    }while(x);
    if(nrc>2)
        return 0;
    return 1;
}

int main()
{
    int ok=0,i=1,x;
    while(f>>x)
    {
        if(minim2cifre(x))
        {
            ok=1;
            v[i++]=x;
        }
    }
    i--;
    if(ok==0)
        g<<"NU EXISTA";
    else
    {
    sort(v+1,v+i+1);
    for(int j=1;j<=i;j++)
        g<<v[j]<<" ";
    }
    return 0;
}
