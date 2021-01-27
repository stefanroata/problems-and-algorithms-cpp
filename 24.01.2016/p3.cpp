#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    long long k,i,y;
    cin>>k;
    for(i=1;i*i<k;i++)
    {
        y=k-i*i;
        if(sqrt(y)==(int)sqrt(y)&&sqrt(y)>i)
            cout<<i<<" "<<sqrt(y)<<'\n';
    }
    return 0;
}
