#include <fstream>
#include <algorithm>

using namespace std;

int v[101],s[10001],n;

ifstream f("ordsume.in");
ofstream g("ordsume.out");

bool cautare(int *p,int nr,int val)
{
    int i;
    for(i=1;i<=nr;i++)
        if(p[i]==val)
        return 1;
    return 0;
}

int main()
{
    int n,i,x,k=1,sum,o=1,j;
    f>>n;
    f>>v[1];
    for(i=2;i<=n;i++)
    {
        f>>x;
        if(!cautare(v,k,x))
            v[++k]=x;
    }
   // k--;
    sum=v[1]+v[2];
    s[o]=sum;
    for(i=1;i<=k-1;i++)
        for(j=i+1;j<=k;j++)
    {
        sum=v[i]+v[j];
        if(!cautare(s,o,sum))
        s[++o]=sum;
    }
   // o--;
    sort(s+1,s+o+1);
    for(i=1;i<=o;i++)
        g<<s[i]<<" ";
    return 0;
}
