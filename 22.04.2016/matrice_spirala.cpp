#include <fstream>

using namespace std;

ifstream f("spirala2.in");
ofstream g("spirala2.out");

int a[505][505];

int main()
{
    int n,k,l,c,x=1,i,j,p,t;
    long long s=0;
    f>>p>>n>>t;
    for(k=1;k<=n/2+1;k++)
    {
        for(c=k;c<=n-k+1;c++){a[k][c]=x;x++;}
        for(l=k+1;l<=n-k+1;l++){a[l][n-k+1]=x;x++;}
        for(c=n-k;c>=k;c--){a[n-k+1][c]=x;x++;}
        for(l=n-k;l>=k+1;l--){a[l][k]=x;x++;}
    }
    if(p==1)
    {
        for(i=1;i<=n;i++)
        {
            if(i!=t)
            s+=(long long)(a[i][t]%100003)+(long long)(a[t][i]%100003);
        }
        g<<s;
    }
    else
    {
        for(i=1;i<=n;i++)
            swap(a[i][t],a[t][i]);
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
                g<<a[i][j]<<" ";
            g<<'\n';
        }
    }
    return 0;
}
