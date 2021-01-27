#include <fstream>

using namespace std;

ifstream f("unice1.in");
ofstream g("unice1.out");

int v[1001];

int main()
{
    int n,i,j,nr,nr1=0;
    f>>n;
    for(i=1;i<=n;i++)
        f>>v[i];
    for(i=1;i<=n;i++)
    {
        nr=0;
        for(j=1;j<=n;j++)
        if(v[i]==v[j]) nr++;
        if(nr==1)
            nr1++;
    }
    g<<nr1;
    return 0;
}

