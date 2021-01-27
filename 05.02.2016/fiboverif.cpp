#include <iostream>

using namespace std;

int main()
{
    int n,i,x,f1,f2,f,ok;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>x;
        f1=f2=1;
        f=f1+f2;
        ok=0;
        if(x==1)
            ok=1;
        while(f<=x)
        {
            f1=f2;
            f2=f;
            f=f1+f2;
            if(f==x)
            {
                ok=1;
                break;
            }
        }
        if(ok)
            cout<<"DA"<<'\n';
        else
            cout<<"NU"<<'\n';
    }
    return 0;
}
