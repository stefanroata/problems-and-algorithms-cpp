#include <fstream>
#include <algorithm>

using namespace std;

ifstream f("pareimpare.in");
ofstream g("pareimpare.out");

int v[101],a[100001],b[100001];

int main()
{
    int x,i=1,j=1,k;
    while(f>>x)
    {
        v[x]++;
        if(v[x]==1)
        {
            if(x%2==1)
                a[j++]=x;
            else
                b[i++]=x;
        }
    }
    i--;
    j--;
    sort(a+1,a+j+1);
    sort(b+1,b+i+1);
    reverse(b+1,b+i+1);
    for(k=1;k<=j;k++)
        g<<a[k]<<" ";
    g<<'\n';
    for(k=1;k<=i;k++)
    g<<b[k]<<" ";
    return 0;
}
