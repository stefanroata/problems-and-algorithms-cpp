#include <iostream>

using namespace std;

int main()
{
    int n,i,t,s=0,x;
    cin>>n>>t;
    for(i=1;i<=n;i++)
    {
        cin>>x;
        s+=t/x;
    }
    cout<<s;
    return 0;
}
