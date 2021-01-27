#include <iostream>

using namespace std;

int a[101][101];

int main()
{
    int n,m,i,j,k,q,ok,h;
    cin>>n>>m;
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
        cin>>a[i][j];
    cin>>q;
    for(h=1;h<=q;h++)
    {
        cin>>k;
        for(i=1;i<=n;i++)
        {
            ok=1;
            for(j=1;j<=m&&ok;j++)
                if(a[i][j]==k)
                    ok=0;
            if(ok==1)
            {
                cout<<"NU"<<'\n';
                break;
            }
        }
        if(ok==0)
            cout<<"DA"<<'\n';
    }
    return 0;
}
