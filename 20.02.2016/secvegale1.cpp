#include <iostream>

using namespace std;

int v[1001];

int main()
{
    int n,pozi,pozj,dist,distmax=0,i,j;
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>v[i];
    for(i=1;i<=n-1;i++)
    {
        for(j=i+1;j<=n;j++)
        {
            if(v[i]==v[j])
            {
                dist=j-i+1;
                if(dist>distmax)
                {
                    distmax=dist;
                    pozi=i;
                    pozj=j;
                }
            }
        }
    }
    cout<<pozi<<" "<<pozj;
    return 0;
}
