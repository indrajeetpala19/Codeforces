#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        bool res = true;
        int n;
        cin>>n;
        vector<string> s;
        int arr[26]={0};
        for(int j=0; j<n; j++)
        {
            string h;
            cin>>h;
            for(const char& c : h)
                arr[c-'a']++;
            s.push_back(h);
        }
        for(auto x : arr)
            if(x>0)
                if(x%n!=0)
                    res=false;
        if(res) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
    return 0;
}
