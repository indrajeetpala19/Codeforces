#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    string s="";
    for(int i=0; i<n; i++)
    {
        if(i>0 && i<n) s+= "that ";
        if(i%2==0) s+="I hate ";
        else s+="I love ";
    }
    s+="it";
    cout<<s<<endl;
    return 0;
}
