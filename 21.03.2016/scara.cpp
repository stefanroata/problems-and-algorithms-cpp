#include <fstream>
#include <cmath>

using namespace std;

ifstream f("scara.in");
ofstream g("scara.out");

int main()
{
    long long n,x,y;
    f>>n;
    y=(n-1)/4;
    if(y%2==0)
        x=(n-1)%4+y;
    else
        x=3-(n-1)%4+y;
    g<<x<<" "<<y;
    return 0;
}
