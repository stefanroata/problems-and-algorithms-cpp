#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

char v[1001];

int main()
{
    int n,i;
    cin>>v;
    n=strlen(v);
    sort(v,v+n);
    cout<<v;
    return 0;
}
