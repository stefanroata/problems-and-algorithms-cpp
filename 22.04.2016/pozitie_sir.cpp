#include <iostream>

using namespace std;

int main()
{
    int n,x,nr,i,t=0,ok=0;
    cin>>n>>nr;
    for(i=1;i<=n;i++)
    {
        cin>>x;
        if(x>nr)
            t++;
        else
            if(nr==x)
                ok=1;
    }
    if(ok)
        cout<<t+1;
    else
        cout<<-1;
    return 0;
}
