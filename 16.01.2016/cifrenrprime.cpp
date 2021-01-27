#include <iostream>

using namespace std;

bool prim(long long x)
{
    if(x<2) return false;
    if(x==2) return true;
    if(x%2==0) return false;
    for(long long i=3;i*i<=x;i+=2)
        if(x%i==0)
        return false;
    return true;
}


int nrc(int x)
{
    int cont=0;
    do{x/=10;cont++;}while(x);
    return cont;
}


int main()
{
    int n,i,x,s=0;
    cin>>n;
    for(i=1;i<=n;++i)
    {
        cin>>x;
        if(prim(x))
            s+=nrc(x);
    }
    cout<<s;
    return 0;
}
