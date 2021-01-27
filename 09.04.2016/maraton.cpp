#include <fstream>

using namespace std;

ifstream f("maraton.in");
ofstream g("maraton.out");

int v[100002],s[100002],part[100002];

int main()
{
    int n,i,a,b,maxim=-1,x,k,t;
    f>>n;
    for(i=1;i<=n;i++)
    {
        f>>a>>b;
        x=a/b;
        if(a%b==0)
        v[x]++;
        else
            part[x]++;
    }
    for(i=1;i<=100001;i++)
        s[i]=s[i-1]+v[i]+part[i-1];
    f>>k;
    for(i=1;i<=k;i++)
    {
        f>>t;
        g<<s[t]<<'\n';
    }
    return 0;
}
