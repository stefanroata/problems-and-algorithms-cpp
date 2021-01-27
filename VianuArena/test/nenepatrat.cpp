#include <fstream>

using namespace std;

ifstream f("nenepatrat.in");
ofstream g("nenepatrat.out");

int main()
{
    int n,cont=0,i,j;
    f>>n;
    for(i=2;i*i<n;i++)
    {
        if(n%i==0)
        {
            j=i*i;
            if(j>n)
                cont++;
            j=n/i;
            j=j*j;
            if(j>n)
                cont++;
        }
    }
    g<<cont;
    return 0;
}
