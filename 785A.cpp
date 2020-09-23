#include <bits/stdc++.h>
using namespace std;

int solve(string s)
{
    if(s[0]=='T') return 4;
    if(s[0]=='C') return 6;
    if(s[0]=='O') return 8;
    if(s[0]=='D') return 12;
    if(s[0]=='I') return 20;
}

int main() {

    int t, c=0;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        c+= solve(s);
    }
    cout<<c<<endl;
    return 0;
}
