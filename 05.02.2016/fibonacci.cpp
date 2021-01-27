#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    long long f1,f2,n,f;
    cin>>f1>>f2>>n;
    cout<<f1<<" "<<f2<<" ";
    f=f1+f2;
        while(abs(f)<=n)
        {
            cout<<f<<" ";
            f1=f2;
            f2=f;
            f=f1+f2;
        }
    return 0;
}
