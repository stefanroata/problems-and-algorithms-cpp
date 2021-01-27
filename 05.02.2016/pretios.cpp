#include <iostream>

using namespace std;

long long f(long long x)
{
    int cont=0;
    while(x!=1)
    {
        x/=2;
        cont++;
    }
    return cont+1;
}

bool prim(long long x)
{
    int i;
    if(x<2)
        return false;
    if(x==2)
        return true;
    if(x%2==0)
        return false;
    for(i=3;i*i<=x;i+=2)
        if(x%i==0)
        return false;
    return true;
}

int main()
{
    long long a,b,i,cont=0;
    cin>>a>>b;
    for(i=a;i<=b;i++)
    {
        if(prim(f(i)))
            cont++;
    }
    cout<<cont;
    return 0;
}
