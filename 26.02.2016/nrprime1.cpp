#include <iostream>
#define VALMAX 1000001
using namespace std;

int v[VALMAX],a[601][601];

void ciur()
{
    int i,j;
    v[0]=v[1]=1;
    for(i=4;i<=VALMAX;i+=2)
        v[i]=1;
    for(i=3;i*i<VALMAX;i+=2)
    {
        if(v[i]==0)
        {
            for(j=i*i;j<=VALMAX;j+=i)
                v[j]=1;
        }
    }
}

int main()
{
    int n,m,i,j,nr=0;
    ciur();
    cin>>n>>m;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            cin>>a[i][j];
            if(j%2==1)
            {
                if(v[a[i][j]]==0)
                    nr++;
            }
        }
    }
    cout<<nr;
    return 0;
}
