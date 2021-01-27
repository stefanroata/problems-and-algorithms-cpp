#include <fstream>

using namespace std;

ifstream f("defrag.in");
ofstream g("defrag.out");

int a[202][722];

int main()
{
    int i,j,t,p,s,k,w,nr=0,nco,nr0,minim;
    f>>t;
    f>>p>>s;
    f>>k;
    for(w=1;w<=k;w++)
    {
        f>>i>>j;
        a[i][j]=1;
        a[i][j+s]=1;
        a[i][0]++;
    }

    //cerinta 1

    if(t==1)
    {
        for(w=1;w<=p;w++)
        {
            if(a[w][0]==0)
               nr++;
        }
        g<<nr;
    }

    //cerinta 2


    else
    {
        for(w=1;w<=p;w++)
        {
            if(a[w][0]==0)
                g<<0<<" ";
            else
            {
                minim=1000000;
                nco=a[w][0];
                nr0=0;
                for(i=1;i<=nco;i++)
                    if(a[w][i]==0)
                    nr0++;
                if(nr0<minim)
                    minim=nr0;
                for(i=2;i<=s;i++)
                {
                    if(a[w][i-1]==0)
                        nr0--;
                    if(a[w][i+nco-1]==0)
                    nr0++;
                    if(nr0<minim)
                        minim=nr0;
                }
                g<<minim<<" ";
            }
        }
    }
    return 0;
}
