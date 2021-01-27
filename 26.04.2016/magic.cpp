#include <fstream>
#include <cstring>

using namespace std;

ifstream f("magic6.in");
ofstream g("magic6.out");

bool v[10];

int main()
{
    int n,i;
    char c;
    bool ok;
    f>>n;
    for(i=1;i<=n;i++)
    {
        f>>c;
        if(c>='a'&&c<='z')
            g<<char(c-32);
        if(c>='0'&&c<='9')
            v[(int)c-'0']=1;
    }
    g<<'\n';
    if(v[0])
    {
        ok=0;
        for(i=1;i<=9&&!ok;i++)
        {
            if(v[i])
            {
                ok=1;
                g<<i;
                v[i]=0;
            }
        }
        g<<0;
        for(i=1;i<=9;i++)
            if(v[i])
            g<<i;
    }
    else
    {
        for(i=1;i<=9;i++)
        {
            if(v[i])
                g<<i;
        }
    }
    return 0;
}
