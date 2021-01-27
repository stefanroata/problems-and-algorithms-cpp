#include <fstream>

using namespace std;

ifstream f("alo.in");
ofstream g("alo.out");

int main()
{
    int eu,n,i,x,minute,a,b,c,d,e;
    f>>eu>>n;
    for(i=1;i<=n;i++)
    {
        f>>x>>minute;
            e=x%10;
            x/=10;
            d=x%10;
            x/=10;
            c=x%10;
            x/=10;
            b=x%10;
            x/=10;
            a=x%10;
            x/=10;
        if(e==5)
        {
            if(a==2)
                eu+=minute;
            if(a==1)
                eu-=2*minute;
        }
    }
    g<<eu;
    return 0;
}
