#include <iostream>
#include <cmath>
using namespace std;

int nrc(long long x)
{
    int nrc=0;
    do
    {
        x/=10;
        nrc++;
    }while(x);
    return nrc;
}

long long concatenare(int x,int y)
{
    long long nr,z;
    long long w;
    nr=nrc(y);
    z=pow(10,nr);
    w=x*z+y;
    return w;
}

bool palindrom(long long x)
{
    long long cif;
    long long nou=0,xx;
    xx=x;
    do
    {
        cif=x%10;
        x/=10;
        nou=nou*10+cif;
    }while(x);
    if(xx==nou)
        return true;
    return false;
}

int main()
{
    int a,b,cont=0;
    cin>>a>>b;
    if(palindrom(concatenare(a,b))||palindrom(concatenare(b,a)))
        cont++;
    while(a&&b)
    {
        cin>>a>>b;
        if(a&&b)
        {
            if(palindrom(concatenare(a,b))||palindrom(concatenare(b,a)))
        cont++;
        }
    }
   cout<<cont;
    return 0;
}
