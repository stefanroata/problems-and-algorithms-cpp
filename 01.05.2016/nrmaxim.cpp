#include <iostream>

using namespace std;

int nrmaxim(int n)
{
    int aux,p=1,rez,maxim=0,x;
    aux=n;
    x=n;
    do
    {
        aux/=10;
        p*=10;
    }while(aux);
    p/=10;
    do
    {
        rez=(n%p)*10+n/p;
        if(rez>maxim)
            maxim=rez;
        n=rez;
    }while(n!=x);
    return maxim;
}


int main()
{
    int x;
    cin>>x;
    cout<<nrmaxim(x);
}
