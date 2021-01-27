#include <fstream>
#include <algorithm>

using namespace std;

ifstream f("puterik.in");
ofstream g("puterik.out");

bool puterek(int x,int k)
{
    if(x==1)
        return 1;
    int r;
    do
    {
        r=x%k;
        if(r!=0)
            return 0;
        x/=k;
        if(x==1)
            return 1;
    }while(x);
    return 1;
}

int v[101];

int main()
{
    int n,i,x,k,j=0;
    f>>n>>k;
    for(i=1;i<=n;i++)
    {
        f>>x;
        if(puterek(x,k))
            v[j++]=x;
    }
   // j--;
    sort(v,v+j);
    for(i=0;i<=j-1;i++)
        g<<v[i]<<" ";
    return 0;
}
