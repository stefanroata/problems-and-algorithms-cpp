#include <fstream>
#include <algorithm>

using namespace std;

ifstream f("permfix.in");
ofstream g("permfix.out");

int v[21],a[10];

bool check_vector(int n)
{
    int i;
    for(i=1;i<=n;i++)
        if(v[i]==i)
        return 0;
    return 1;
}

int main()
{
    int n,k,i,maxim=-1,j,t;
    f>>n>>k;
    for(i=1;i<=k;i++)
        {
            f>>a[i];
            if(a[i]>maxim)
                maxim=a[i];
        }
    for(i=1;i<=n;i++)
        v[i]=i;
    j=1;
    i=1;
    do
    {
        if(check_vector(n))
        {

        if(j==a[i])
        {
            for(t=1;t<=n;t++)
                g<<v[t]<<" ";
            g<<'\n';
            i++;
        }
        j++;
        }

    }while(next_permutation(v+1,v+n+1)&&j<=maxim);
    return 0;
}

