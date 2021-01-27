#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char s[260];
    cin.get(s,260);
    int l=strlen(s);
    for(int i=1;i<l-1;++i)
    {
        if(s[i]==' ')
        {
            if(s[i-1]>='a'&&s[i-1]<='z')
                s[i-1]=s[i-1]-('a'-'A');
            if(s[i+1]>='a'&&s[i+1]<='z')
                s[i+1]=s[i+1]-('a'-'A');
        }
    }
    if(s[0]>='a'&&s[0]<='z')
        s[0]=s[0]-('a'-'A');
    if(s[l-1]>='a'&&s[l-1]<='z')
        s[l-1]=s[l-1]-('a'-'A');
    cout<<s;
    return 0;
}
