#include <iostream>

using namespace std;


int sumcif(long long x)
{
    int cif,s=0;
    while(x)
    {
        cif=x%10;
        x/=10;
        s+=cif;
    }
    return s;
}


int main()
{
    long long n,i,x,a,cont=0;
    cin>>n;
    cin>>a;
    for(i=1;i<n;i++)
    {
        cin>>x;
        if(sumcif(a)==sumcif(x))
        cont++;
        a=x;
    }
    cout<<cont;
    return 0;
}
