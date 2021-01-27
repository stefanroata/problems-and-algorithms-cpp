#include <fstream>
#include <algorithm>

using namespace std;

ifstream f("arme.in");
ofstream g("arme.out");

int a[1001],b[1001];

int main()
{
    int n,m,i,s=0;
    f>>n>>m;
    for(i=1;i<=n;i++)
        f>>a[i];
    for(i=1;i<=m;i++)
        f>>b[i];
    sort(a+1,a+n+1);
    sort(b+1,b+m+1);
    reverse(b+1,b+m+1);
    for(i=1;i<=m;i++)
    {
        if(b[i]>a[i])
            swap(a[i],b[i]);
    }
    for(i=1;i<=n;i++)
        s+=a[i];
    g<<s;
    return 0;
}
