#include <iostream>
#include <cmath>
using namespace std;

int nrc(long long x)
{
    int cont=0;
    do
    {
        x/=10;
        cont++;
    }while(x);
    return cont;
}


int main()
{
    long long n,x1,x2,r,n1,rmax=-1,y1,y2,y3,nmax=-1;
    int nr,i;
    cin>>n;
    nr=nrc(n);
    for(i=1;i<=nr;i++)
    {
        y1=pow(10,i);
        y2=pow(10,i-1);
        x1=n/y1;
        x2=n%y1;
        x2=x2%y2;
        y3=pow(10,nrc(x2));
        n1=x1*y3+x2;
        n1/=10;
        if(n1>nmax)
            nmax=n1;
    }
    cout<<nmax;
    return 0;
}

