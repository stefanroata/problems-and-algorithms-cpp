#include<iostream>

using namespace std;

int v[1001];

int main()
{
    int n,i,ok;
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>v[i];
    if(v[1]>v[2])
    {
        ok=1;
        for(i=2;i<=n-1;i++)
        {
            if(i%2==0)
            {
                if(v[i]>=v[i+1])
                {
                    ok=0;
                    break;
                }
            }
            if(i%2==1)
            {
                if(v[i]<=v[i+1])
                {
                    ok=0;
                    break;
                }
            }
        }
        if(ok)
            cout<<"DA";
        else
            cout<<"NU";
    }
    else
    {
        ok=1;
        for(i=2;i<=n-1;i++)
        {
            if(i%2==0)
            {
                if(v[i]<=v[i+1])
                {
                    ok=0;
                    break;
                }
            }
            if(i%2==1)
            {
                if(v[i]>=v[i+1])
                {
                    ok=0;
                    break;
                }
            }
        }
        if(ok)
            cout<<"DA";
        else
            cout<<"NU";
    }
    return 0;
}
