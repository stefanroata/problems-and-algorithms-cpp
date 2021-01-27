#include <iostream>
using namespace std;

int main()
{
    int n,i,ok=0,x,y;
    cin>>n;
    cin>>x;
    for(i=1;i<=n-1;i++)
    {
        cin>>y;
        if(x!=y)
        {
            ok=1;
            break;
        }
        x=y;
    }
    if(ok==0)
        cout<<"DA";
    else
        cout<<"NU";
    return 0;
}
