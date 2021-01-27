#include <fstream>

using namespace std;

ifstream f("chibrituri.in");
ofstream g("chibrituri.out");

int vert[]={4,2,2,2,3,2,3,2,4,3},oriz[]={2,0,3,3,1,3,3,1,3,3};

int main()
{
    int n,t,i,h1,h2,m1,m2,nr=0,h,m,sumv,sumo,h1min,h2min,m1min,m2min,h1max,h2max,m1max,m2max;
    f>>n>>t;
    for(i=0;i<=1439;i++)
    {
        sumv=sumo=0;
        h=i/60;
        m=i%60;
        if(h==0)
        {
            h1=0;
            h2=0;
        }
        if(h<10)
        {
            h1=0;
            h2=h;
        }
        if(h>9)
        {
            h2=h%10;
            h1=h/10;
        }
        if(m==0)
        {
            m1=0;
            m2=0;
        }
        if(m<10)
        {
            m1=0;
            m2=m;
        }
        if(m>9)
        {
            m2=m%10;
            m1=m/10;
        }
        sumv+=vert[h1]+vert[h2]+vert[m1]+vert[m2];
        sumo+=oriz[h1]+oriz[h2]+oriz[m1]+oriz[m2];
        if(sumv==n&&sumo==t)
        {
            nr++;
            if(nr==1)
            {
                h1min=h1;
                h2min=h2;
                m1min=m1;
                m2min=m2;
            }
            h1max=h1;
            h2max=h2;
            m1max=m1;
            m2max=m2;
        }
    }
    g<<nr<<'\n';
    g<<h1min<<h2min<<":"<<m1min<<m2min<<'\n';
    g<<h1max<<h2max<<":"<<m1max<<m2max;
    return 0;
}
