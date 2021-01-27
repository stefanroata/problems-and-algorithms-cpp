#include <fstream>
#include <climits>

using namespace std;
ifstream f("secvsummax.in");
ofstream g("secvsummax.out");

int v[100001];

int main()
{
    int sum,bestSum=INT_MIN,i,n,poz,pozz;
    f>>n;
    for(i=1;i<=n;i++)
        f>>v[i];
    sum = 0;
for (i = 1; i <= n; i++) {
    sum += v[i];
    if (sum < 0)
        {sum = 0;poz=i+1;}
    else if (sum > bestSum)
        {bestSum = sum;
        pozz=i;
        }
}
    g<<poz<<" "<<pozz;
    return 0;
}
