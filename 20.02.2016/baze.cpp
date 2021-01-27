#include <iostream>

using namespace std;

int main()
{
    long long n,b,c,cif,s=0,p=1,r;
    cin>>n>>b>>c;
    if(b==c)
        cout<<n;
    else
    {
    do
    {
        cif=n%10;
        n/=10;
        s+=cif*p;
        p*=b;
    }while(n);
    n=s;
    s=0;
    p=1;
    do
    {
        r=n%c;
        s+=r*p;
        p*=10;
        n/=c;
    }while(n);
    cout<<s;
    }
    return 0;
}
