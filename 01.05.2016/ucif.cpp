#include <iostream>

using namespace std;

int main()
{
    int n,i,p=1,cif,r=0,c,t,s=0;
    cin>>t;
    for(i=1;i<=t;i++)
    {
    cin>>n;
    c=n%10;
    n/=10;
    r=0;
    p=1;
    do
    {
        cif=n%10;
        if(cif!=c)
        {
            r=r+p*cif;
            p*=10;
        }
        n/=10;
    }while(n);
    s+=r;
    }
    cout<<s;
    return 0;
}
