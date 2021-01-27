#include <iostream>

using namespace std;

int v[10000],n;

bool acp(int x,int y)
{
    if(x<0) x=-x;
    if(y<0) y=-y;
    if(x%2==y%2&&x!=y)
        return 1;
    return 0;
}

void inserare(int x,int poz)
{
    n++;
    for(int i=n-1;i>=poz;i--)
        v[i+1]=v[i];
    v[poz]=x;

}

int ma(int x,int y)
{
    return (x+y)/2;
}


int main()
{
    int i,ok;
    cin>>n;
    for(i=0;i<=n-1;i++)
        cin>>v[i];
    for(i=0;i<=n-1;i++)
        cout<<v[i]<<" ";
    cout<<'\n';
    ok=1;
    while(ok)
    {
    ok=0;
    for(i=0;i<=n-2;i++)
    {
        if(acp(v[i],v[i+1]))
        {
            ok=1;
            inserare(ma(v[i],v[i+1]),i+1);
            i++;
        }
    }
    if(ok)
    {
        for(i=0;i<=n-1;i++)
            cout<<v[i]<<" ";
        cout<<'\n';
    }
    }
    return 0;
}
