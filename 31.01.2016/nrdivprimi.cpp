#include <iostream>

using namespace std;

int main()
{
    int x,y,d=2,p,xx,nrdp=0,maxnrdp,nr,yy;
    cin>>x;
    xx=x;
    while(xx!=1)
    {
        p=0;
        if(d*d>xx)
            d=xx;
        while(xx%d==0)
        {
            xx/=d;
            p=1;
        }
        if(p)
        nrdp++;
        d++;
    }
    maxnrdp=nrdp;
    nr=x;
    while(cin>>y)
    {
        d=2;
        nrdp=0;
        yy=y;
        while(yy!=1)
        {
            p=0;
            if(d*d>yy)
                d=yy;
            while(yy%d==0)
            {
                yy/=d;
                p=1;
            }
            if(p)
                nrdp++;
            d++;
        }
        if(nrdp>maxnrdp)
        {
            maxnrdp=nrdp;
            nr=y;
        }
        else
            if(nrdp==maxnrdp)
        {
            if(y>nr)
                nr=y;
        }
        if(x==y)
            break;
        x=y;
    }
    cout<<nr<<" "<<maxnrdp;
    return 0;
}

