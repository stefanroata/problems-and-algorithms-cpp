#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int v[1001],w[1001];

int main()
{
    int n,i,k=0,j=0;
    cin>>n;
    for(i=0;i<=n-1;i++)
    {
        cin>>v[i];
        if(sqrt(v[i])==(int)sqrt(v[i]))
            w[k++]=v[i];
    }
  //  k--;
    sort(w,w+k);
    for(i=0;i<=n-1;i++)
    {
        if(sqrt(v[i])==(int)sqrt(v[i]))
            cout<<w[j++]<<" ";
        else
            cout<<v[i]<<" ";
    }
    return 0;

}
