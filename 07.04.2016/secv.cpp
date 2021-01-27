#include <fstream>

using namespace std;

ifstream f("date.in");
ofstream g("date.out");

int main()
{
    int x,i,n,maxim,minim,t,ssecv=0,s,rest=0,pozmax,pozmin;
    f>>n;
    f>>x;
    minim=maxim=t=s=x;
    for(i=2;i<=n;i++)
    {
        f>>x;
        t+=x;
        if(x>maxim)
        {
            maxim=x;
            pozmax=i;
            s+=x;
            s+=(t-s);
            s=s-rest;
            rest=t-x;
        }
        if(x<minim)
        {
            minim=x;
            pozmin=i;
            s+=(t-s);
            s=s-rest;
            rest=t-x;
        }
    }
    g<<s;
}
