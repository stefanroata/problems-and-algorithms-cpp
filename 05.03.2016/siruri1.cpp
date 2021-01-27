#include <fstream>

using namespace std;

ifstream f("siruri1.in");
ofstream g("siruri1.out");

int v[101],a[101];

int main()
{
    int n,i,ok,j;
    f>>n;
    for(i=1;i<=n;i++)
    {
        f>>v[i];
        a[i]=v[i];
    }
    do
    {
        ok=0;
        for(i=1;i<=n-1;i++)
        {
            if(v[i]>v[i+1])
            {
                swap(v[i],v[i+1]);
                ok=1;
            }
        }
    }while(ok);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(v[j]==a[i])
            {
                g<<j<<" ";
                break;
            }
        }
    }
    return 0;
}
