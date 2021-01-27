#include <iostream>

using namespace std;

int main()
{
    long long n,i,s=0,j,k;
    cin>>n;
    i=2;
    while(s<n)
    {
        s=i*(i-1)/2;
        k=n;
        k-=s;
        if(k%i==0)
        {
        k/=i;
        for(j=k;j<=k+i-1;j++)
            cout<<j<<" ";
        cout<<'\n';
        }
        i++;
    }
}
