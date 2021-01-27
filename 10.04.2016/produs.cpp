#include <iostream>
#include <algorithm>

using namespace std;

int vf1[10001],vf2[10001];

int main()
{
    int n,m,p,i,nr=0,j,s=0,x,maxim1=-1,maxim2=-1,ok;
    cin>>n>>p;
    for(i=1;i<=n;i++)
    {
        cin>>x;
        vf1[x]++;
        if(x>maxim1)
            maxim1=x;
    }
    cin>>m;
    for(i=1;i<=m;i++)
    {
        cin>>x;
        vf2[x]++;
        if(x>maxim2)
            maxim2=x;
    }
    for(i=0;i<=10000;i++)
    {
        nr=0;
        ok=0;
        for(j=0;j<=10000;j++)
        {
            if(vf1[i]&&vf2[j])
            {
                if(i*j<p)
                    {
                        nr+=vf2[j];
                        ok=1;
                    }
                else break;
            }
        }
        if(ok)
        s+=vf1[i]*nr;
    }
    cout<<s;
    return 0;
}
