#include <iostream>

using namespace std;

long long oglindit(long long x)
{
    long long c,nou=0;
    do
    {
        c=x%10;
        nou=nou*10+c;
        x/=10;
    }while(x);
    return nou;
}

int main()
{
    long long n,i,x,x1,ok=0;
    cin>>n;
    cin>>x;
    x1=oglindit(x);
    for(i=2;i<=n;i++)
    {
        cin>>x;
        if(x==x1)
        {
            ok=1;
            break;
        }
    }
    if(ok)
        cout<<"DA";
    else
        cout<<"NU";
    return 0;
}
