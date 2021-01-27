#include <iostream>

using namespace std;

int main()
{
    double a,b,c,m;
    cin>>a>>b>>c;
    m=(a+b+c)/3;
    if(m==(int)m)
    {
        cout<<m<<".00";
    }
    else
    {
        m=m*100;
        m=(int)m;
        m=m/100.0;
        cout<<m;
    }
    return 0;
}
