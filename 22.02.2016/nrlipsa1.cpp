#include <fstream>

using namespace std;

ifstream f("nrlipsa1.in");
ofstream g("nrlipsa1.out");

int v[101];

int main()
{
    int x,ok2=0,nr1=-1,nr2,l=0,i;
    while(f>>x)
    {
        if(x>=10&&x<=99&&x%2==0)
            v[x]++;
    }
    for(i=98;i>=10;i-=2)
    {
        if(v[i]==0)
        {
            l++;
            if(l==1)
            {
                ok2=1;
                nr2=i;
            }
            nr1=i;
        }
    }
    if(nr1==-1||nr1==nr2||ok2==0)
    g<<"nu exista";
    else
        g<<nr1<<" "<<nr2;
    return 0;
}
