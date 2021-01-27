#include <fstream>

using namespace std;

ifstream f("comori.in");
ofstream g("comori.out");

int main()
{
    int x=0,y=0,n,i,d,p;
    f>>n;
    for(i=1;i<=n;i++)
    {
        f>>d>>p;
        if(d==1)
        y+=p;
        if(d==2)
        {
            x+=p;
            y+=p;
        }
        if(d==3)
        x+=p;
        if(d==4)
        {
            x+=p;
            y-=p;
        }
        if(d==5)
        y-=p;
        if(d==6)
        {
            x-=p;
            y-=p;
        }
        if(d==7)
        x-=p;
        if(d==8)
        {
            x-=p;
            y+=p;
        }
    }
    g<<x<<" "<<y;
    return 0;
}
