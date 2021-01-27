#include <fstream>

using namespace std;

ifstream f("ucif.in");
ofstream g("ucif.out");

int v[]={0,1,5,2,8,3,9,2,8,7};

int main()
{
    int n,i,j,p,s=0;
    f>>n;
    for(i=1;i<=n;i++)
    {
        p=1;
        for(j=1;j<=i;j++)
            p=(p*i)%10;
        s=(s+p)%10;
    }
    g<<s%10;
    return 0;
}
