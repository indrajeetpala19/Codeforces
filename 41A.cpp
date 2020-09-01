#include <bits/stdc++.h>
using namespace std;

int main() {

    string s, t;
    cin>>s>>t;

    if(s.length()!=t.length())
    {
        cout<<"NO"<<endl;
        return 0;
    }
    reverse(t.begin(), t.end());

    for(int i=0; i<s.length(); i++)
    {
        if(s[i]!=t[i])
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }

    cout<<"YES"<<endl;
    return 0;
}
