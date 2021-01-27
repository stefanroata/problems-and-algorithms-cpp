#include <iostream>

using namespace std;

int sumcif(int n,int &s)
{
    if(n==0)
        s=0;
    else
        s=sumcif(n/10,s)+n%10;
    return s;
}

int main()
{
    int n,a;
    cin>>n>>a;
    cout<<sumcif(n,a);
    return 0;
}
