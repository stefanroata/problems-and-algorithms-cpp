#include <fstream>

using namespace std;

ifstream f("devt.in");
ofstream g("devt.out");

bool v[100001];
int s[100001];

void ciur(int n)
{
    int i,j;
    v[0]=v[1]=1;
    for(i=4;i<=n;i+=2)
        v[i]=1;
    for(i=3;i*i<=n;i+=2)
    {
        if(v[i]==0)
        {
            for(j=i*i;j<=n;j+=i)
                v[j]=1;
        }
    }
}

void suma(int n)
{
    int i,nr=0;
    for(i=1;i<=n;i++)
    {
        if(v[i]==1)
            nr++;
        s[i]=nr;
    }
}

int main()
{
    int n,i,k,a,b,dp,d;
    f>>n;
    ciur(n);
    suma(n);
    f>>k;
    for(i=1;i<=k;i++)
    {
        f>>a>>b;
        dp=s[b]-s[a-1];
        g<<dp<<'\n';
    }
    return 0;
}
