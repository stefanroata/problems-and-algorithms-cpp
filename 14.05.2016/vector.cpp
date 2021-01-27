#include <iostream>
#include <vector>

using namespace std;

vector <int> v(101,0);

int main()
{
    int *p;
   v[0]=0;
   v[1]=1;
   v[2]=2;
   v[3]=3;
   v[4]=4;
   v.erase(v.begin()+1);
   for(int i=1;i<=4;i++)
    cout<<v[i]<<" ";
}
