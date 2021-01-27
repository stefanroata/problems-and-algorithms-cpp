#include <fstream>
#include <algorithm>

using namespace std;

ifstream f("cifreord1.in");
ofstream g("cifreord1.out");

int v[100000];

int main()
{
    int i=1,x,cif;
        while(f>>x)
       {
           do
        {
            cif=x%10;
            x/=10;
            v[i]=cif;
            i++;
        }while(x);
       }

    sort(v+1,v+i);
    reverse(v+1,v+i);
    i--;
    for(int j=1;j<=i;j++)
    {
        g<<v[j]<<" ";
        if(j%20==0)
            g<<'\n';
    }
    return 0;
}
