#include<iostream>

using namespace std;

int main()
{
    int a,b,d,nr,p1,p2,ok=1;
    cin>>a>>b;
    d=2;
    while(a!=1&&b!=1)
    {
        p1=0;
        p2=0;
        if(d*d>a)
            d=a;
        if(d*d>b)
            d=b;
        while(a%d==0)
        {
            p1=1;
            a/=d;
        }
        while(b%d==0)
        {
            p2=1;
            b/=d;
        }
        if(p1+p2==1)
        {
            ok=0;
            break;
        }
        d++;
        if(a==1&&b!=1)
        {
            ok=0;
            break;
        }
        if(b==1&&a!=1)
        {
            ok=0;
            break;
        }
    }
    if(ok)
        cout<<"DA";
    else
        cout<<"NU";
    return 0;
}
