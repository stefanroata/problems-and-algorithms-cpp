#include <iostream>

using namespace std;

int main()
{
    int n,i,x,c,cmax=-1;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>x;
        do
        {
            c=x%10;
            if(c>cmax)
                cmax=c;
            x/=10;
        }while(x);
    }
    cout<<cmax+1;
    return 0;
}
