#include <iostream>

using namespace std;

bool a[32][32];
int l[1600],c[1600],x[1600];

int main()
{
    int n,i,j,nr=1,nr1=0,t,h=1,e;
    cin>>n;
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
        cin>>a[i][j];
    for(i=2;i<=n-1;i++)
    {
        for(j=2;j<=n-1;j++)
        {
            if(a[i][j]==1)
                nr1++;
        }

    }
    x[nr]=nr1;
    nr++;
    while(h&&nr1)
    {
        h=1;
    for(i=2;i<=n-1;i++)
    {
        for(j=2;j<=n-1;j++)
        {
            if(a[i][j])
            {
            t=0;
            if(a[i-1][j]==0)
                t++;
            if(a[i+1][j]==0)
                t++;
            if(a[i][j-1]==0)
                t++;
            if(a[i][j+1]==0)
                t++;
            if(t>=2)
                {
                    l[h]=i;
                    c[h]=j;
                    h++;
                }
            }

        }

    }
    h--;
    if(h==0)
        break;
    nr1-=h;
    x[nr]=nr1;
    nr++;
    for(e=1;e<=h;e++)
    {
        a[l[e]][c[e]]=0;
        l[e]=0;
        c[e]=0;
    }

    }
    nr-=2;
    cout<<nr<<'\n';
    for(i=1;i<=nr;i++)
        cout<<x[i]<<'\n';
    return 0;
}

