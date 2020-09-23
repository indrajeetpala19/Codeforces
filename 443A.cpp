#include <bits/stdc++.h>
using namespace std;

int solve(string s)
{
    int cnt=0;
    int arr[26];
    for(int i=0; i<s.length(); i++)
        arr[s[i]-'a']=1;
    for(auto x : arr)
        if(x==1) cnt++;
    return cnt-1;
}

int main() {

    string s;
    getline(cin,s);

    int c= solve(s);
    cout<<c<<endl;
    return 0;
}
