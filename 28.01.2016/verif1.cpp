#include <iostream>
using namespace std;

int v[501];

int main()
{
    int n,i,x,ok,nr=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>x;
        if(x%2==0)
            v[nr++]=x;
    }
    nr--;
    ok=1;
    for(i=1;i<=nr-1;i++)
        {
            if(v[i]>v[i+1])
            {
                ok=0;
                break;
            }
        }
    if(ok)
        cout<<"DA";
    else
        cout<<"NU";
    return 0;
}
