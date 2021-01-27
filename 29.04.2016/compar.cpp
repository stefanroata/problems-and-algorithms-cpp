#include <fstream>
#include <cstring>

using namespace std;

ifstream f("compar.in");
ofstream g("compar.out");

char s[100005];


int main()
{
    int maxim,minim,n,i;
    f>>s;
    n=strlen(s);
    g<<n+1<<'\n';
    maxim=n+1;
    minim=1;
    for(i=0;i<=n;i++)
    {
        if(s[i]=='<')
            g<<minim<<" ",minim++;
        else
            g<<maxim<<" ",maxim--;
    }
    return 0;
}
