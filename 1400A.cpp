#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    vector<string> res;
    for(int i=0; i<t; i++)
    {
        int n;
        string s;
        cin>>n>>s;
        string w="";
        for(int j=0; j<n; j++)
        {
            string k= s.substr(j,n+j);
            w+=k[j];
        }
        res.push_back(w);
    }
    for(auto x: res)
        cout<<x<<"\n";

    return 0;
}
