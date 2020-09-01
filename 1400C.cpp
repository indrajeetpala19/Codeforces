#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    vector<string> res;
    for(int p=0; p<t; p++)
    {
        int x;
        string s;
        cin>>s>>x;
        string w="";
        for(int i=0; i<s.length(); i++)
        {
            if(i>x && s[i-x]=='1')
                w+='1';
            else if( i+x<=s.length() && s[i+x]== '1')
                w+='1';
            else
                w+='0';
        }
        if(w.length()==0)
        {
            string h="-1";
            res.push_back(h);
        }
        else res.push_back(w);
    }
    for(auto j: res)
        cout<<j<<"\n";

    return 0;
}
