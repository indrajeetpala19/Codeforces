#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    int c=0;
    for(int i=1; i<s.length(); i++)
        if(islower(s[i]))
            c++;
    if(islower(s[0] && c==0))
    {
          s[0]=toupper(s[0]);
        for(int i=1; i<s.length(); i++)
            s[i]=tolower(s[i]);
        cout<<s<<endl;
    }
    else
        cout<<s<<endl;

    return 0;
}
