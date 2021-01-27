#include <iostream>

using namespace std;

int main()
{
    int n,r,i=1,j,v[12];
    cin>>n;
    do
    {
        r=n%16;
        v[i]=r;
        i++;
        n/=16;
    }while(n);
    for(j=i-1;j>=1;j--)
    {
        if(v[j]==10)
            cout<<"A";
        else
        if(v[j]==11)
            cout<<"B";
        else
        if(v[j]==12)
            cout<<"C";
        else
        if(v[j]==13)
            cout<<"D";
        else
        if(v[j]==14)
            cout<<"E";
        else
        if(v[j]==15)
            cout<<"F";
        else
            cout<<v[j];
    }
    return 0;
}
