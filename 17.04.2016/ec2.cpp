#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
    float a,b,c,d,x1,x2;
    cin>>a>>b>>c;
    d=b*b-4*a*c;
    if(d<0)
        cout<<"Nu are solutii reale";
    if(d==0)
    {
        cout<<"Radacina dubla ";
        x1=-b/(2*a);
        printf("%.2f",x1);
    }
    if(d>0)
    {
        x1=(-b-sqrtl(d))/(2*a);
        x2=(-b+sqrtl(d))/(2*a);
        if(x1<x2)
            swap(x1,x2);
        printf("%.2f %.2f",x1,x2);
    }
    return 0;
}
