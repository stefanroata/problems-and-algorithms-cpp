#include <fstream>

using namespace std;

ifstream f("intervale1.in");
ofstream g("intervale1.out");

int main()
{
    int n,i;
    long double x,x1,x2,c1,c2,d,minim=10000000001;
    f>>n;
    f>>x1;
    for(i=1;i<=n-1;i++)
    {
        f>>x2;
        c1=x1;
        c2=x2;
        if(c1>=0&&c2>=0)
        {
        c1+=1;
        c1=(int)c1;
        if(c2==(int)c2)
            c2--;
        else
            c2=(int)c2;
        d=(int)(c2-c1+1);
        if(d==0)
        {
            g<<0;
            return 0;
        }
        if(d<minim)
            minim=d;
        }
        else
            if(c1<0&&c2>=0)
        {
            if(c1==(int)c1)
                c1++;
            else
                c1=(int)c1;
            if(c2==(int)c2)
            c2--;
            else
            c2=(int)c2;
            if(c1<0)
                c1=-c1;
            d=c1+c2+1;
            if(d<minim)
                minim=d;
        }
        else
            if(c1<0&&c2<0)
        {
             if(c1==(int)c1)
                c1++;
            else
                c1=(int)c1;
            if(c2==(int)c2)
                c2++;
            else
                c2=(int)c2;
            if(c1<0)
                c1=-c1;
            if(c2<0)
                c2=-c2;
            d=c1-c2+1;
            if(d<minim)
                minim=d;
        }
        x1=x2;
    }
  g<<minim;
    return 0;
}
