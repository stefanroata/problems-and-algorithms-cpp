#include <iostream>

using namespace std;

int v[1001];

int main()
{
    int n,i,maxim=-1,nr=0,poz,ok1,ok2;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>v[i];
        if(v[i]>maxim)
            maxim=v[i];
    }
    for(i=1;i<=n;i++)
    {
        if(v[i]==maxim)
            {nr++;poz=i;}
        if(nr>1)
            break;
    }
    if(nr>1)
        cout<<"NU";
    else
    {
        if(poz==1||poz==n)
            cout<<"NU";
        else
        {
            ok1=1;
            for(i=1;i<=poz-1;i++)
                if(v[i]>=v[i+1])
            {
                ok1=0;
                break;
            }
            if(ok1==0)
                cout<<"NU";
            else
            {
                ok2=1;
                for(i=poz;i<=n-1;i++)
                    if(v[i]<=v[i+1])
                {
                    ok2=0;
                    break;
                }
                if(ok2==0)
                    cout<<"NU";
                else
                    cout<<"DA";
            }
        }
    }
    return 0;
}
