#include <fstream>

using namespace std;

ifstream f("numere8.in");
ofstream g("numere8.out");

int v[10001];

int main()
{
    int x,i;
    while(f>>x)
    {
        if(x<10000)
            v[x]++;
    }
    for(i=9999;i>=1;i--)
    {
        if(v[i]==0)
            g<<i<<" ";
    }
    return 0;
}
