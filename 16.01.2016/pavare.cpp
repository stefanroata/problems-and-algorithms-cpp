#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    long long a,b,c;
    cin>>a>>b;
    c=__gcd(a,b);
    cout<<a*b/(c*c)<<" "<<c;
    return 0;
}
