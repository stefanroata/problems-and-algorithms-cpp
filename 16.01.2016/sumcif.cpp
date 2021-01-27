#include <iostream>

using namespace std;

int main()
{
    int n,poz=1,cif,s=0;
    cin>>n;
    while(n)
    {
        cif=n%10;
        n/=10;
        if(poz%2==0)
            s+=cif;
        poz++;
    }
    cout<<s;
    return 0;
}
