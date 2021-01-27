#include <fstream>

using namespace std;

ifstream f("frecventa1.in");
ofstream g("frecventa1.out");

int v[101],a[100001];

int main()
{
    int n,i,x,j=1,ok;
    f>>n;
    for(i=1;i<=n;i++)
    {
        f>>x;
        v[x]++;
        if(v[x]==1)
            a[j++]=x;
    }
    j--;
    do
    {
        ok=0;
        for(i=1;i<=j-1;i++)
        {
            if(v[a[i]]<v[a[i+1]])
            {
                swap(v[a[i]],v[a[i+1]]);
                swap(a[i],a[i+1]);
                ok=1;
            }
            else
                if(v[a[i]]==v[a[i+1]])
            {
                if(a[i]>a[i+1])
                {swap(a[i],a[i+1]);
                ok=1;
                }
            }
        }
    }while(ok==1);
    for(i=1;i<=j;i++)
        g<<a[i]<<" ";
    return 0;
}
