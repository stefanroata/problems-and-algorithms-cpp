#include <iostream>

using namespace std;

int fv[10001];

int main()
{
    int n,i,x,ok=1,maxim=-1,nr=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>x;
        fv[x]++;
        if(x>maxim)
            maxim=x;
    }
    for(i=0;i<=maxim;i++)
    {
        if(fv[i]%2==1)
            nr++;
        if(nr>1)
        {
            ok=0;
            break;
        }
    }
    if(ok==1)
        cout<<"DA";
    else
        cout<<"NU";
    return 0;
}
