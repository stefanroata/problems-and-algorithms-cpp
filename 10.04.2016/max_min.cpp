#include <iostream>

using namespace std;

int sumcif(int x)
{
    int cif,s=0;
    do
    {
        cif=x%10;
        x/=10;
        s+=cif;
    }while(x);
    return s;
}

int main()
{
    int n,i,x,minim=100000,maxim=-1,smax=-1,smin=100000,t;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>x;
        t=sumcif(x);
        if(t>smax)
        {
            smax=t;
            maxim=x;
        }
        if(t<smin)
        {
            smin=t;
            minim=x;
        }
    }
    cout<<minim<<'\n'<<maxim;
    return 0;
}
