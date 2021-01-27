#include <iostream>

using namespace std;

long long nrcif(long long x)
{
    int nrc=0;
    do
    {
        x/=10;
        nrc++;
    }while(x);
    return nrc;
}

int main()
{
    long long n,i,x,ok=1;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>x;
        if(nrcif(x)%2==1)
        {
            ok=0;
            break;
        }
    }
    if(ok)
        cout<<"DA";
    else
        cout<<"NU";\
        return 0;
}
