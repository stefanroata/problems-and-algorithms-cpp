#include <fstream>

using namespace std;

ifstream f("barca.in");
ofstream g("barca.out");

int main()
{
    int n,i;
    f>>n;
    g<<4*n<<'\n';
    for(i=1;i<=4*n;i++)
    {
        if(i%4==1)
            g<<"IG"<<'\n';
        if(i%4==2)
            g<<"I"<<'\n';
        if(i%4==3)
            g<<i/4+1<<'\n';
        if(i%4==0)
            g<<"G"<<'\n';
    }
    return 0;
}
