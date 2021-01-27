#include <fstream>

using namespace std;

ifstream f("interclasare.in");
ofstream g("interclasare.out");

int a[100002],b[100002],c[200005];

int main()
{
    int n,m,i,j,k,p;
    f>>n;
    for(i=0;i<n;i++)
        f>>a[i];
    f>>m;
    for(j=0;j<m;j++)
        f>>b[j];
    i=0;
    j=0;
    k=0;
    while(i<n&&j<m)
    {
        if(a[i]<b[j])
            c[k++]=a[i++];
        else
            c[k++]=b[j++];
    }
    for(p=i;p<n;p++)
        c[k++]=a[p];
    for(p=j;p<m;p++)
        c[k++]=b[p];
    for(i=0;i<m+n;i++)
    {
        g<<c[i]<<" ";
        if(i%10==9)
            g<<'\n';
    }
    return 0;
}
