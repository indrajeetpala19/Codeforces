#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string a,b,h="";
    cin>>a>>b;
    for(int i=0; i<a.length(); i++)
        if(a[i]!=b[i]) h+='1';
        else h+='0';
    cout<<h<<endl;
    return 0;
}
