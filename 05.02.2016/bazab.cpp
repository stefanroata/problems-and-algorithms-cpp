#include <iostream>

using namespace std;

int main()
{
    int n,b,r,rmax=-1;
    cin>>n>>b;
    do
    {
        r=n%b;
        if(r>rmax)
            rmax=r;
        n/=b;
    }while(n);
    cout<<rmax;
    return 0;
}
