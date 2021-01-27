#include <fstream>
#include <cstring>

using namespace std;

ifstream f("criptmat.in");
ofstream g("criptmat.out");

char s[201],a[101][21];

int main()
{
    int c,l,r,i,cat,j,k;
    f>>c;
    f>>s;
    l=strlen(s)-1;
    for(i=0;i<=l;i++)
    {
        r=i%c;
        cat=i/c;
        if(r==c-1)
        {
            if(cat%2==0)
            {
                k=0;
                for(j=i-c+1;j<=i;j++)
                    a[cat][k++]=s[j];
            }
            else
            {
                k=0;
                for(j=i;j>=i-c+1;j--)
                a[cat][k++]=s[j];
            }
        }
    }
    for(j=0;j<=c-1;j++)
        for(i=0;i<=cat;i++)
        g<<a[i][j];
    return 0;
}
