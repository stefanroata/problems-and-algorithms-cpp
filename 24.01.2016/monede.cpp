#include <iostream>

using namespace std;

int main()
{
    long long a,b,c,s,v1,v2,v3;
    cin>>a>>b>>c>>s;
    v3=s/c;
    s=s%c;
    v2=s/b;
    s=s%b;
    v1=s%c;
    cout<<v1<<" "<<v2<<" "<<v3;
    return 0;
}
