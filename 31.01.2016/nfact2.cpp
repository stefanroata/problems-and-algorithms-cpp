#include <iostream>

using namespace std;

int main()
{
    long long n,i,x,s1=0,s2=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>x;
        while(x%2==0)
        {
            x/=2;
            s1++;
        }
        while(x%5==0)
        {
            x/=5;
            s2++;
        }
    }
    cout<<min(s1,s2);
    return 0;
}
