#include <iostream>

using namespace std;

int main()
{
    int n,val,s=0,x,cif,aux,t,r,rmax;
    cin>>n;
    aux=n;
    t=n/10;
    rmax=aux%t;
    val=1;
    while(n/10)
    {
        cif=n%10;
        cif=cif*val;
        val*=10;
        s+=cif;
        n/=10;
        x=n/10*val+s;
        if(x)
        {
        r=aux%x;
        if(r>rmax)
            rmax=r;
        }
    }
    cout<<rmax;
    return 0;
}
