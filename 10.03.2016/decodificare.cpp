#include <fstream>

using namespace std;

ifstream f("decodificare.in");
ofstream g("decodificare.out");

char l[3001],z[3001];
int main()
{
    int n,k,i,t,j=1,o,y=1;
    char c;
    f>>n;
    k=n/2;
    t=k+1;
    o=k-1;
    for(i=1;i<=n*n/4;i++)
    {
        f>>c;
        if(i%o==1&&i!=1&&i<=k+(k-1)*(k-1))
            z[y++]=c;
        if(i%t==1&&i<=1+(k-1)*(k+1))
            l[j++]=c;
    }
    for(i=1;i<=y-1;i++)
        g<<z[i];
    for(i=1;i<=j-1;i++)
        g<<l[i];
    return 0;

}
