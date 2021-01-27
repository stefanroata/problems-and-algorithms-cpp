#include <iostream>

using namespace std;

bool v[1001];

int main()
{
    int n,i,s,ok=1;
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>v[i];
    for(i=1;i<=n-1;i++)
    {
        s=v[i]+v[i+1];
        if(s==2)
        {
            ok=0;
            break;
        }
    }
    if(ok)
        cout<<"DA";
    else
        cout<<"NU";
    return 0;
}
