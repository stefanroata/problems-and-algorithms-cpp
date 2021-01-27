#include <fstream>
#include <algorithm>

using namespace std;

ifstream f("halfsort2.in");
ofstream g("halfsort2.out");

int v[101],v1[101],v2[101];

bool cmp(int x,int y){return (x>y);}

int main()
{
    int n,i,k=1,p=1;
    f>>n;
    for(i=1;i<=n;i++)
    {
        f>>v[i];
        if(i%2==1)
            v1[k++]=v[i];
        else
            v2[p++]=v[i];
    }
    sort(v1+1,v1+n/2+1,cmp);
    sort(v2+1,v2+n/2+1);
    k=1;
    p=1;
    for(i=1;i<=n;i++)
    {
        if(i%2==1)
            g<<v1[k++]<<" ";
        else
            g<<v2[p++]<<" ";
    }
    return 0;
}
